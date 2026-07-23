/*
 * XREFs of PiProcessDriverInstance @ 0x140AD2500
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x1405DECE8 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PipOpenServiceEnumKeys @ 0x140A114F8 (PipOpenServiceEnumKeys.c)
 *     PiFindDevInstMatch @ 0x140AD27C4 (PiFindDevInstMatch.c)
 *     PiRearrangeDeviceInstances @ 0x140AD2A0C (PiRearrangeDeviceInstances.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessDriverInstance(unsigned __int16 *a1, __int64 a2, const wchar_t *a3, char *a4)
{
  int v8; // eax
  __int64 v9; // r8
  int DevInstMatch; // ebx
  NTSTRSAFE_PWSTR v11; // rdi
  PVOID v12; // rcx
  char v13; // al
  void *v14; // r15
  _WORD *v15; // rbx
  ULONG v16; // esi
  unsigned __int64 v17; // r14
  _WORD *Pool2; // rax
  signed __int64 v19; // rax
  int Data; // [rsp+40h] [rbp-39h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-29h] BYREF
  wchar_t v24[4]; // [rsp+60h] [rbp-19h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-11h] BYREF
  wchar_t pszDest[12]; // [rsp+78h] [rbp-1h] BYREF

  Data = 0;
  *(_DWORD *)v24 = 0;
  ppszDestEnd = 0LL;
  *(_OWORD *)P = 0LL;
  ValueName = 0LL;
  v8 = PipOpenServiceEnumKeys((UNICODE_STRING *)a2, 0xF003Fu, 0LL, (HANDLE *)&ppszDestEnd, 1);
  DevInstMatch = v8;
  if ( v8 >= 0 )
  {
    v11 = ppszDestEnd;
    DevInstMatch = PiFindDevInstMatch((int)ppszDestEnd, (int)a1, (int)&Data, (int)P, v24);
    if ( DevInstMatch < 0 )
    {
LABEL_17:
      ZwClose(v11);
      return (unsigned int)DevInstMatch;
    }
    v12 = P[1];
    v13 = *a4;
    if ( P[1] )
    {
      if ( v13 )
      {
LABEL_14:
        if ( v12 )
        {
          ExFreePool(v12);
          *(_OWORD *)P = 0LL;
        }
        goto LABEL_16;
      }
      ZwDeleteValueKey(v11, (PUNICODE_STRING)P);
      if ( --Data )
        PiRearrangeDeviceInstances(v11);
    }
    else
    {
      if ( !v13 )
      {
LABEL_16:
        DevInstMatch = 0;
        goto LABEL_17;
      }
      v14 = (void *)*((_QWORD *)a1 + 1);
      v15 = 0LL;
      v16 = *a1;
      v17 = (unsigned __int64)v16 >> 1;
      if ( *((_WORD *)v14 + v17 - 1) )
      {
        Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
        v15 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v14, v16);
          v16 += 2;
          v15[v17] = 0;
          v14 = v15;
        }
      }
      ppszDestEnd = pszDest;
      RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", Data);
      v19 = ppszDestEnd - pszDest;
      ValueName.MaximumLength = 20;
      if ( (_DWORD)v19 == -1 )
        ValueName.Length = 20;
      else
        ValueName.Length = 2 * v19;
      ValueName.Buffer = pszDest;
      ZwSetValueKey(v11, &ValueName, 0, 1u, v14, v16);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      ++Data;
    }
    *(_DWORD *)&ValueName.Length = 786442;
    ValueName.Buffer = L"Count";
    ZwSetValueKey(v11, &ValueName, 0, 4u, &Data, 4u);
    ValueName.Buffer = L"NextInstance";
    *(_DWORD *)&ValueName.Length = 1703960;
    ZwSetValueKey(v11, &ValueName, 0, 4u, &Data, 4u);
    v12 = P[1];
    goto LABEL_14;
  }
  if ( *a4 && (byte_140EF412B & 0x40) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      *(_QWORD *)(a2 + 8),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ServiceOpenFailure,
      v9,
      *((const wchar_t **)a1 + 1),
      *(const wchar_t **)(a2 + 8),
      a3,
      v8);
  return (unsigned int)DevInstMatch;
}
