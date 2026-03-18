/*
 * XREFs of ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x140111A3C
 * Callers:
 *     xxxGetClipboardData @ 0x1401118D0 (xxxGetClipboardData.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1401137C0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3434@Z @ 0x140201B0C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // r9
  struct _KPROCESS *ThreadProcess; // rax
  struct _KPROCESS *CurrentProcess; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // ebx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int v14; // ecx
  struct tagCLIP *ClipFormat; // rax
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  LONGLONG TimeQuadPart; // [rsp+58h] [rbp-28h] BYREF
  LONGLONG v19; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-10h] BYREF
  int v22; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int ThreadProcessId; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int CurrentProcessId; // [rsp+B8h] [rbp+38h] BYREF

  v20 = 0LL;
  v3 = a2;
  if ( *((_QWORD *)a1 + 14) )
  {
    if ( (unsigned int)dword_14039BBC0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x400000000000LL) )
    {
      v17 = 0x1000000LL;
      v22 = v3;
      ThreadProcess = PsGetThreadProcess(**(PETHREAD **)(v4 + 16));
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(ThreadProcess);
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(**(PETHREAD **)(*((_QWORD *)a1 + 14) + 16LL));
      CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
      v19 = PsGetProcessCreateTimeQuadPart(CurrentProcess);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v7,
        (unsigned int)&unk_1403693EA,
        v8,
        v9,
        (__int64)&CurrentProcessId,
        (__int64)&v19,
        (__int64)&ThreadProcessId,
        (__int64)&TimeQuadPart,
        (__int64)&v22,
        (__int64)&v17);
    }
    v10 = *((_DWORD *)a1 + 16);
    *((_DWORD *)a1 + 16) = v10 | 0x80;
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *((_QWORD *)a1 + 14));
    v11 = xxxSendTransformableMessageTimeout(
            *((struct tagTHREADINFO ***)a1 + 14),
            773LL,
            v3,
            0LL,
            0x42u,
            0x7530u,
            (unsigned __int64 *)&v20,
            1,
            0);
    v13 = *((_DWORD *)a1 + 16);
    if ( (v10 & 0x40) != 0 )
      v14 = v13 | 0x40;
    else
      v14 = v13 & 0xFFFFFFBF;
    *((_DWORD *)a1 + 16) = v14 & 0xFFFFFF7F;
    if ( !v11 )
    {
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
      return 0LL;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
  }
  ClipFormat = FindClipFormat(a1, v3, 1u);
  if ( !ClipFormat )
    return 0LL;
  return (void *)*((_QWORD *)ClipFormat + 1);
}
