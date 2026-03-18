/*
 * XREFs of ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x140038038
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A778C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::GetVidSchSibmitDataSize(ADAPTER_RENDER *this)
{
  __int64 v1; // rax
  int v2; // ecx

  v1 = *((_QWORD *)this + 2);
  if ( *(int *)(v1 + 2776) < 0x2000 )
    v2 = 1;
  else
    v2 = *(_DWORD *)(v1 + 296);
  if ( *(int *)(v1 + 2776) >= 0x2000 || *(_BYTE *)(v1 + 3076) )
    return (unsigned int)(*(_DWORD *)(v1 + 2984) * (72 * v2 + 224) + 8 * v2 + 624);
  else
    return 1304LL;
}
