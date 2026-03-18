/*
 * XREFs of ?GrepDeleteReferencedRegion@@YAJPEAUHRGN__@@@Z @ 0x1400554B0
 * Callers:
 *     GreDereferenceObject @ 0x140055340 (GreDereferenceObject.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D9B8 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     HmgShareUnlock @ 0x140055534 (HmgShareUnlock.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140055690 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 */

__int64 __fastcall GrepDeleteReferencedRegion(HRGN a1)
{
  BOOL v1; // ebx
  struct OBJECT *v3[9]; // [rsp+20h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v3, a1, 0, 0);
  v1 = 0;
  if ( v3[0] )
  {
    HmgShareUnlock(v3[0]);
    if ( v3[0] )
    {
      if ( !*((_DWORD *)v3[0] + 19) )
        v1 = RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v3) != 0;
    }
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v3);
    return !v1 ? 0xC0000001 : 0;
  }
  else
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v3);
    return 3221225480LL;
  }
}
