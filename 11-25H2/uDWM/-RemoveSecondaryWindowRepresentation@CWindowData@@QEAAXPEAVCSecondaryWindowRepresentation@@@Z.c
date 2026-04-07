/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001DB1C
 * Callers:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18001D92C (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?OnWindowDestroyed@CSecondaryWindowRepresentation@@QEAAXPEAVCWindowData@@@Z @ 0x180098F90 (-OnWindowDestroyed@CSecondaryWindowRepresentation@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x180050A50 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800C5CD4 (McTemplateU0pp_EtwEventWriteTransfer.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(
        CWindowData *this,
        __m128i *a2,
        __int64 a3,
        __int64 a4)
{
  __m128i v5; // xmm6
  CWindowData *v7; // rsi
  struct CSecondaryWindowRepresentation *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = (struct CSecondaryWindowRepresentation *)a2;
  v5 = a2[4];
  v7 = (CWindowData *)a2[4].m128i_i64[0];
  if ( v7 != this )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pp_EtwEventWriteTransfer(this, &RemoveSecondaryWindowRepresentation_WR, a2, *((_QWORD *)this + 5));
    DynArray<CStoryboard const *,0>::Remove((char *)this + 496, &v8);
  }
  LOBYTE(a4) = 1;
  CWindowData::RemoveSecondaryWindowRepresentation(v7, a2, (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v5, 8)), a4);
}
