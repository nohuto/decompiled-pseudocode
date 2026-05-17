/*
 * XREFs of RtlpHpQueryGCTimerInterval @ 0x1800D3FBC
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800D3DD4 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800D3070 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall RtlpHpQueryGCTimerInterval(unsigned __int16 *a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v3; // rcx
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  v1 = 1000;
  v4 = 0;
  if ( a1 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(a1, 9u, 0, &Handle) >= 0
      && (int)RtlQueryImageFileKeyOption((__int64)Handle, L"GCInterval", 4, (int *)&v4, 4u, 0LL) >= 0 )
    {
      v3 = 1000LL * v4;
      if ( v3 <= 0xFFFFFFFF )
      {
        if ( (_DWORD)v3 )
          v1 = 1000 * v4;
      }
    }
    if ( Handle )
      NtClose(Handle);
  }
  return v1;
}
