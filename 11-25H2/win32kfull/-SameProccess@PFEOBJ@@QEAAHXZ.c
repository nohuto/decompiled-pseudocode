/*
 * XREFs of ?SameProccess@PFEOBJ@@QEAAHXZ @ 0x1401CF220
 * Callers:
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1401CF0B4 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x14031E75C (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::SameProccess(PFEOBJ *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)this + 92LL)
    || *(_DWORD *)(*(_QWORD *)this + 92LL) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    return 1;
  }
  return v1;
}
