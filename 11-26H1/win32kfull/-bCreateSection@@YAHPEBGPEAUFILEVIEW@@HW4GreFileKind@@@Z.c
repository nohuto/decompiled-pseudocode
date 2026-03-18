/*
 * XREFs of ?bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1400CFE9C
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x14031D48C (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 * Callees:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1400CF7D0 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ??0FileObj@Gre@@QEAA@PEBG_N@Z @ 0x1400CFF68 (--0FileObj@Gre@@QEAA@PEBG_N@Z.c)
 */

__int64 __fastcall bCreateSection(unsigned __int16 *a1, __int64 a2, int a3, int a4)
{
  HANDLE v8; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Gre::FileObj::FileObj(&Handle, a1, a3 != 0);
  v8 = Handle;
  Handle = 0LL;
  if ( !v8 )
    return 0LL;
  if ( !(unsigned int)bCreateSectionFromHandle(v8, a1, (_OWORD *)a2, a3, a4) )
  {
    if ( Handle )
      ZwClose(Handle);
    return 0LL;
  }
  if ( *(_BYTE *)(a2 + 45) )
  {
    ZwClose(*(HANDLE *)(a2 + 48));
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
  return 1LL;
}
