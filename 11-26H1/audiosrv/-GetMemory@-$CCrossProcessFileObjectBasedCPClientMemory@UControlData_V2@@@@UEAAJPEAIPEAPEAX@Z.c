/*
 * XREFs of ?GetMemory@?$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAIPEAPEAX@Z @ 0x18015EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B0364 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1800CEC00 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x180162244 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall CCrossProcessFileObjectBasedCPClientMemory<ControlData_V2>::GetMemory(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  void *v8; // rcx
  const char *v9; // r9
  int v11; // eax
  void *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  DWORD BytesReturned; // [rsp+40h] [rbp-38h] BYREF
  __int128 OutBuffer; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( a3 )
  {
    if ( a2 )
    {
      *a3 = 0LL;
      *a2 = 0;
      v8 = *(void **)(a1 + 16);
      if ( !v8 || v8 == (void *)-1LL )
      {
        v6 = -2147467261;
        v7 = 145LL;
        goto LABEL_15;
      }
      if ( !*(_QWORD *)(a1 + 32) )
      {
        BytesReturned = 0;
        OutBuffer = 0LL;
        if ( !DeviceIoControl(v8, 0x22000Cu, 0LL, 0, &OutBuffer, 0x10u, &BytesReturned, 0LL) )
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)0x97,
                   (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
                   v9);
        v11 = DWORD2(OutBuffer);
        if ( DWORD2(OutBuffer) < 0x1AC )
        {
          v6 = -2005139387;
          v7 = 153LL;
          goto LABEL_15;
        }
        v12 = (void *)OutBuffer;
        v13 = DWORD2(OutBuffer);
        *(_QWORD *)(a1 + 32) = OutBuffer;
        *(_DWORD *)(a1 + 24) = v11;
        v14 = AERTLockMemory(v12, v13);
        wil::details::in1diag3::Log_IfFailedWithExpected(
          retaddr,
          (void *)0x9F,
          (__int64)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
          (const char *)v14,
          1u,
          0x80070522);
      }
      *a3 = *(_QWORD *)(a1 + 32);
      *a2 = *(_DWORD *)(a1 + 24);
      return 0LL;
    }
    v6 = -2147024809;
    v7 = 138LL;
  }
  else
  {
    v6 = -2147024809;
    v7 = 137LL;
  }
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
    (const char *)v6);
  return v6;
}
