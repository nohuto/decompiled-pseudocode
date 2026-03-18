/*
 * XREFs of ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009D390
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400A320C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009D6F0 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchCreateSyncObject @ 0x1400CA670 (VidSchCreateSyncObject.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreatePagingFenceObjects(VIDMM_GLOBAL *this)
{
  __int64 i; // rbx
  __int64 v3; // rax
  int SyncObject; // esi
  _QWORD v6[10]; // [rsp+60h] [rbp-58h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1738); i = (unsigned int)(i + 1) )
  {
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[0]) = 5;
    v3 = (unsigned int)(-101 - 100 * i);
    *((_QWORD *)this + i + 613) = v3;
    *((_QWORD *)this + i + 677) = v3;
    v6[1] = v3;
    SyncObject = VidSchCreateSyncObject(
                   *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
                   0,
                   (unsigned int)v6,
                   9,
                   0LL,
                   0LL,
                   i,
                   (__int64)this + 8 * (unsigned int)i + 5928,
                   0LL,
                   0LL,
                   0LL,
                   *((struct VIDMM_DEVICE **)this + 5065));
    if ( SyncObject < 0 )
    {
      VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
      return (unsigned int)SyncObject;
    }
  }
  return 0LL;
}
