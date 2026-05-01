/*
 * XREFs of ?GetDedicatedGpuMemoryGbInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN0@Z @ 0x180345F30
 * Callers:
 *     <none>
 * Callees:
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034FCF8 (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetDedicatedGpuMemoryGbInstantaneous(
        GamingOverlayExperienceManager *this,
        double *a2,
        double *a3)
{
  __int64 v6; // r9
  double v7; // xmm0_8
  __int64 v8; // rax
  __int64 v9; // rcx
  double v10; // xmm0_8
  __int64 v11; // rax
  __int64 result; // rax

  if ( !*((_QWORD *)this + 86) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)((char *)this - 136));
  v6 = *((_QWORD *)this + 121);
  if ( v6 < 0 )
  {
    v8 = *((_QWORD *)this + 121) & 1LL | (*((_QWORD *)this + 121) >> 1);
    v7 = (double)(int)v8 + (double)(int)v8;
  }
  else
  {
    v7 = (double)(int)v6;
  }
  *a2 = v7 / 1048576000.0;
  v9 = *((_QWORD *)this + 122);
  if ( v9 < 0 )
  {
    v11 = *((_QWORD *)this + 122) & 1LL | (*((_QWORD *)this + 122) >> 1);
    v10 = (double)(int)v11 + (double)(int)v11;
  }
  else
  {
    v10 = (double)(int)v9;
  }
  result = 0LL;
  *a3 = v10 / 1048576000.0;
  return result;
}
