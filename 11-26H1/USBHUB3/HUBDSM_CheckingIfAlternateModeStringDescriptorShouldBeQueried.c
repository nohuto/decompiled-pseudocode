/*
 * XREFs of HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried @ 0x1400202F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_LogAlternateMode @ 0x14002BC2C (HUBDTX_LogAlternateMode.c)
 */

__int64 __fastcall HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rbx
  unsigned __int8 v3; // cl
  __int64 v4; // rdi
  unsigned __int8 v5; // dl
  bool v6; // zf
  unsigned __int8 v7; // al
  unsigned __int8 v8; // cl

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(__int64 **)(v1 + 2656);
  v3 = *((_BYTE *)v2 + 8);
  v4 = *v2;
  if ( v3 == 0xFF )
  {
    *((_BYTE *)v2 + 8) = 0;
    v3 = 0;
  }
  v5 = *(_BYTE *)(v4 + 4);
  v6 = v3 == v5;
  if ( v3 < v5 )
  {
    v7 = v3;
    do
    {
      v8 = v7;
      if ( *(_BYTE *)(v4 + 4LL * v7 + 47) )
        break;
      HUBDTX_LogAlternateMode(v1, 0LL);
      v8 = ++*((_BYTE *)v2 + 8);
      v5 = *(_BYTE *)(v4 + 4);
      v7 = v8;
    }
    while ( v8 < v5 );
    v6 = v8 == v5;
  }
  if ( !v6 )
    return 4089LL;
  *((_BYTE *)v2 + 8) = -1;
  return 4061LL;
}
