/*
 * XREFs of sub_14002B8B8 @ 0x14002B8B8
 * Callers:
 *     sub_14002BC40 @ 0x14002BC40 (sub_14002BC40.c)
 * Callees:
 *     sub_14002EB94 @ 0x14002EB94 (sub_14002EB94.c)
 */

__int64 __fastcall sub_14002B8B8(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  int v6; // edx

  if ( a2 )
  {
    v3 = (__int64 *)(a1 + 1672);
    v4 = a2;
    do
    {
      v5 = *v3;
      if ( *v3 )
      {
        v6 = *(_DWORD *)(v5 + 20);
        if ( (v6 & 0x20) != 0 )
          *(_DWORD *)(v5 + 20) = v6 & 0xFFFFFFDF;
      }
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  *(_DWORD *)(a1 + 24) &= ~0x100u;
  StorPortResume(a1);
  return sub_14002EB94(a1);
}
