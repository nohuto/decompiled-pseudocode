/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D9B8
 * Callers:
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ?GrepDeleteReferencedRegion@@YAJPEAUHRGN__@@@Z @ 0x1400554B0 (-GrepDeleteReferencedRegion@@YAJPEAUHRGN__@@@Z.c)
 *     GreCopyVisRgn @ 0x1400C4DA0 (GreCopyVisRgn.c)
 *     GreIsValidRegion @ 0x140168F20 (GreIsValidRegion.c)
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  char *v2; // rax
  __int64 v3; // rcx
  char **v4; // rdx

  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
  v2 = (char *)this + 8;
  if ( this != (RGNOBJAPI *)-8LL )
  {
    v3 = *(_QWORD *)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = (char **)*((_QWORD *)this + 2), *v4 != v2) )
      __fastfail(3u);
    *v4 = (char *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *((_QWORD *)this + 2) = (char *)this + 8;
    *(_QWORD *)v2 = v2;
  }
}
