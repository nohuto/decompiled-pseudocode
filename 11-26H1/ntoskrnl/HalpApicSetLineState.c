/*
 * XREFs of HalpApicSetLineState @ 0x140491B50
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicConvertToRte @ 0x140491C84 (HalpApicConvertToRte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicSetLineState(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // ecx
  _DWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+40h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+38h] BYREF

  v13 = 0;
  v12 = 0;
  result = HalpApicConvertToRte(a3, &v12, &v13);
  if ( (int)result >= 0 )
  {
    if ( *a2 != *(_DWORD *)(a1 + 8) )
      return 3221225485LL;
    v7 = a2[1];
    if ( v7 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 40) )
      {
        v8 = *(_DWORD **)(a1 + 16);
        if ( (*(_DWORD *)(a3 + 12) & 1) != 0 )
        {
          *v8 = 2 * v7 + 17;
          _InterlockedOr(v11, 0);
          v8[4] = v13;
          _InterlockedOr(v11, 0);
          *v8 = 2 * a2[1] + 16;
          v9 = v12;
        }
        else
        {
          *v8 = 2 * v7 + 16;
          _InterlockedOr(v11, 0);
          v8[4] = v12;
          _InterlockedOr(v11, 0);
          *v8 = 2 * a2[1] + 17;
          v9 = v13;
        }
        _InterlockedOr(v11, 0);
        v8[4] = v9;
        _InterlockedOr(v11, 0);
      }
      return 0LL;
    }
    switch ( v7 )
    {
      case -3:
        v10 = 832LL;
LABEL_13:
        guard_dispatch_icall_no_overrides(v10, v12);
        return 0LL;
      case -8:
        v10 = *(unsigned int *)(a1 + 36);
        break;
      case -7:
        v10 = *(unsigned int *)(a1 + 32);
        break;
      case -6:
        v10 = 880LL;
        goto LABEL_13;
      case -5:
        v10 = 864LL;
        goto LABEL_13;
      case -4:
        v10 = 848LL;
        goto LABEL_13;
      case -2:
        v10 = 816LL;
        goto LABEL_13;
      default:
        return 3221225485LL;
    }
    if ( !(_DWORD)v10 )
      return 0LL;
    goto LABEL_13;
  }
  return result;
}
