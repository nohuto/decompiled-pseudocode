/*
 * XREFs of ?IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x1801054DC
 * Callers:
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x180105264 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAtlasTexture::IsInUseEntryInRow(CAtlasTexture *this, int a2)
{
  char v2; // r8
  __int64 v3; // rdx

  v2 = 0;
  if ( !a2 )
    return 1;
  v3 = (unsigned int)(a2 - 1);
  if ( (unsigned int)v3 < *((_DWORD *)this + 6) )
    return *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v3) != 0LL;
  return v2;
}
