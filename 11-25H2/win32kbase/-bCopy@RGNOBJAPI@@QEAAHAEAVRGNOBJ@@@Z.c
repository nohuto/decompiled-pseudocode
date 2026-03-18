/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x14000DEB0
 * Callers:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     GreCopyVisRgn @ 0x14017D470 (GreCopyVisRgn.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x14000DD20 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x14000E8F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EB3C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140016730 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x1400DDB7C (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     ?RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z @ 0x1401C44D0 (-RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(RGNOBJAPI *this, struct RGNOBJ *a2, const struct REGION_CORE *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  const struct REGION_CORE *v8; // r8
  const struct REGION_CORE *v9; // r8
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  if ( qword_1402A10B0 )
    return Win32kRS::RegionCore_bCopy(
             (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)),
             (struct REGION_CORE *)((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL)),
             a3);
  v7 = *(_QWORD *)this;
  LODWORD(v11) = 0;
  v10 = (v7 + 24) & -(__int64)(v7 != 0);
  v12 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
  if ( RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion(
         (RGNCOREOBJ *)&v10,
         (const struct RGNCOREOBJ *)&v12,
         (unsigned int *)&v11) )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11, v11);
    if ( v11 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v11, a2, v9);
      v3 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v11);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
    return v3;
  }
  else
  {
    RGNOBJ::vCopy(this, a2, v8);
    return 1LL;
  }
}
