/*
 * XREFs of sub_18005537C @ 0x18005537C
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_180035EE0 @ 0x180035EE0 (sub_180035EE0.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18005537C(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int result; // eax

  if ( *(_BYTE *)(a1 + 433) )
  {
    v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    sub_180012AC4(a1 + 128);
    if ( *(_DWORD *)(a1 + 36) )
    {
      *(_BYTE *)(a1 + 120) = 1;
      Cnd_signal((_Cnd_t)(a1 + 208));
    }
    else
    {
      sub_1800553F4(a1);
    }
    return Mtx_unlock(v2);
  }
  return result;
}
