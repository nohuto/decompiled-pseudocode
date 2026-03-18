/*
 * XREFs of ?bRectl@RGNOBJ@@QEBAHXZ @ 0x1400AC900
 * Callers:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14006CBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400ADB54 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x140315AA4 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 * Callees:
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400AC7D8 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bRectl(RGNOBJ *this)
{
  REGION_CORE *v1; // rdi
  unsigned int v2; // ebx
  const struct BaseRustGlobals *BaseRustGlobals; // rax

  v1 = (REGION_CORE *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  v2 = 0;
  if ( GetBaseRustGlobals() )
  {
    BaseRustGlobals = GetBaseRustGlobals();
    LOBYTE(v2) = (*(unsigned int (__fastcall **)(REGION_CORE *))(*(_QWORD *)BaseRustGlobals + 24LL))(v1) != 0;
  }
  else
  {
    LOBYTE(v2) = (unsigned int)REGION_CORE::get_sizeScan(v1) == 56;
  }
  return v2;
}
