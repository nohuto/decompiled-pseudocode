/*
 * XREFs of ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x140104254
 * Callers:
 *     MapInCpuVisibleSegment @ 0x140103038 (MapInCpuVisibleSegment.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012AEC0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VidMmiBuildMdlFromMdl(unsigned __int64 Base, SIZE_T Length, struct _MDL *a3, __int64 a4)
{
  __int16 v4; // si
  ULONG v6; // ebp
  SIZE_T v8; // rbx
  PMDL Mdl; // rax
  PMDL v11; // r8
  struct _MDL *v12; // rdx
  char *v13; // rax

  v4 = Base;
  v6 = Length;
  v8 = ((Base & 0xFFF) + Length + 4095) >> 12;
  Mdl = MmCreateMdl(0LL, (PVOID)Base, Length);
  v11 = Mdl;
  if ( Mdl )
  {
    Mdl->Next = 0LL;
    v12 = Mdl + 1;
    Mdl->ByteCount = v6;
    Mdl->Size = 8 * (v8 + 6);
    Mdl->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
    Mdl->ByteOffset = v4 & 0xFFF;
    Mdl->MdlFlags = 1;
    if ( v8 )
    {
      v13 = (char *)((char *)&a3[1] + 8 * a4 - (char *)v12);
      do
      {
        v12->Next = *(struct _MDL **)((char *)&v12->Next + (_QWORD)v13);
        v12 = (struct _MDL *)((char *)v12 + 8);
        --v8;
      }
      while ( v8 );
    }
  }
  return v11;
}
