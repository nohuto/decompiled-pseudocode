/*
 * XREFs of CmFcpManagerCreateSectionFromBuffer @ 0x140867C04
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140866EE0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     CmFcpCleanupSectionState @ 0x140AABB08 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140AC0FB8 (CmFcpUnmapSection.c)
 *     CmFcpManagerCreateSection @ 0x140B3D748 (CmFcpManagerCreateSection.c)
 *     CmFcpMapSection @ 0x140B4E818 (CmFcpMapSection.c)
 */

__int64 __fastcall CmFcpManagerCreateSectionFromBuffer(void *Src, size_t Size, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // xmm1_8
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  void *v13[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h]

  v12 = 0LL;
  v14 = 0LL;
  v11 = 0LL;
  *(_OWORD *)v13 = 0LL;
  v8 = CmFcpManagerCreateSection(Size, a3, a4, &v11);
  if ( v8 >= 0 )
  {
    v8 = CmFcpMapSection(&v11, v13);
    if ( v8 >= 0 )
    {
      memmove(v13[1], Src, Size);
      v9 = v12;
      *(_OWORD *)a5 = v11;
      *(_QWORD *)(a5 + 16) = v9;
      v12 = 0LL;
      v8 = 0;
      v11 = 0LL;
    }
  }
  CmFcpUnmapSection(v13, v7);
  CmFcpCleanupSectionState(&v11);
  return (unsigned int)v8;
}
