/*
 * XREFs of BgpGxFillRectangle @ 0x1404AD7AC
 * Callers:
 *     RaspAntiAlias @ 0x1404ACE2C (RaspAntiAlias.c)
 *     BgpTxtDisplayCharacter @ 0x1404AD084 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x140715B44 (BgpClearScreen.c)
 *     BgpTxtAdjustStaticRegion @ 0x1407164CC (BgpTxtAdjustStaticRegion.c)
 *     BgpTxtCreateRegion @ 0x140C51CF0 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140C51FA0 (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BgpGxFillRectangle(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  result = (unsigned int)(*(_DWORD *)a1 * *(_DWORD *)(a1 + 4));
  v3 = *(_QWORD *)(a1 + 24);
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)result;
    do
    {
      *(_WORD *)(v3 + 1) = a2 >> 8;
      *(_BYTE *)v3 = a2;
      if ( *(_DWORD *)(a1 + 8) == 32 )
        *(_BYTE *)(v3 + 3) = HIBYTE(a2);
      result = (unsigned __int64)*(unsigned int *)(a1 + 8) >> 3;
      v3 += result;
      --v4;
    }
    while ( v4 );
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  return result;
}
