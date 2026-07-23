/*
 * XREFs of ExpQueryModuleInformationImageEx @ 0x14097E450
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x14097E258 (ExpConvertLdrEntryToModuleInfo.c)
 */

__int64 __fastcall ExpQueryModuleInformationImageEx(__int64 a1, __int64 a2)
{
  _WORD *v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // ecx
  _WORD *v7; // rdi
  __int64 result; // rax
  _WORD Src[160]; // [rsp+50h] [rbp-168h] BYREF

  v4 = *(_WORD **)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 20);
  v6 = v5 + 320;
  if ( v5 + 320 < v5 )
  {
    result = 3221225473LL;
    *(_DWORD *)a2 = -1073741823;
  }
  else
  {
    *(_DWORD *)(a2 + 20) = v6;
    if ( *(_DWORD *)(a2 + 16) < v6 )
    {
      **(_DWORD **)(a2 + 24) = v6;
      *(_DWORD *)a2 = -1073741820;
    }
    else
    {
      memset_0(Src, 0, sizeof(Src));
      ExpConvertLdrEntryToModuleInfo(
        *(unsigned __int8 *)(a2 + 32),
        a1,
        *(_DWORD *)(a2 + 36),
        *(_DWORD *)(a2 + 40),
        (__int64)Src);
      Src[0] = 320;
      if ( *(_BYTE *)(a2 + 33) )
        RtlCopyToUser(v4, Src, 0x140uLL);
      else
        RtlCopyVolatileMemory(v4, Src, 0x140uLL);
      v7 = v4 + 160;
      if ( *(_BYTE *)(a2 + 33) )
        RtlWriteUShortToUser(v7, 0);
      else
        *v7 = 0;
      *(_QWORD *)(a2 + 8) = v7;
    }
    ++*(_DWORD *)(a2 + 36);
    return 0LL;
  }
  return result;
}
