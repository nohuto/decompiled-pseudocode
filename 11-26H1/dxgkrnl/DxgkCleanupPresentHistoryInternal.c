/*
 * XREFs of DxgkCleanupPresentHistoryInternal @ 0x140414260
 * Callers:
 *     <none>
 * Callees:
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x14006BD58 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402C4DC0 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall DxgkCleanupPresentHistoryInternal(int a1)
{
  int PresentHistoryInternal; // esi
  unsigned int v3; // edx
  _BYTE *v4; // rbx
  unsigned int v5; // edi
  char *v6; // rcx
  _DWORD Src[2]; // [rsp+20h] [rbp-838h] BYREF
  __int64 v9; // [rsp+28h] [rbp-830h]
  _BYTE *v10; // [rsp+30h] [rbp-828h]
  unsigned int v11; // [rsp+38h] [rbp-820h]
  int v12; // [rsp+3Ch] [rbp-81Ch]
  _BYTE v13[2048]; // [rsp+40h] [rbp-818h] BYREF

  v9 = 0LL;
  v12 = 0;
  do
  {
    v11 = 0;
    v10 = v13;
    Src[0] = a1;
    Src[1] = 2048;
    PresentHistoryInternal = DxgkGetPresentHistoryInternal((char *)Src, 0);
    if ( PresentHistoryInternal < 0 )
      break;
    v3 = v11;
    v4 = v13;
    v5 = 0;
    if ( !v11 )
      break;
    do
    {
      if ( *(_DWORD *)v4 == 9 && (*((_DWORD *)v4 + 8) & 4) != 0 )
      {
        v6 = (char *)*((_QWORD *)v4 + 2);
        if ( v6 )
        {
          FlipManagerConsumerAdapterCleanupTokenDiscard(v6);
          v3 = v11;
        }
      }
      ++v5;
      v4 += *((unsigned int *)v4 + 1);
    }
    while ( v5 < v3 );
  }
  while ( v3 );
  return (unsigned int)PresentHistoryInternal;
}
