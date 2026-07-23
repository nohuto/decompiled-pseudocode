/*
 * XREFs of fabs @ 0x18012A880
 * Callers:
 *     <none>
 * Callees:
 *     _except1 @ 0x180130900 (_except1.c)
 *     _sptype @ 0x1801313B0 (_sptype.c)
 *     _ctrlfp @ 0x180131460 (_ctrlfp.c)
 */

double __cdecl fabs(double X)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rdx
  int v4; // r8d
  int v5; // r9d
  int v6; // eax
  double v7; // [rsp+50h] [rbp+8h]

  v1 = ctrlfp(8064LL, 65472LL);
  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 )
  {
    v2 = sptype() - 1;
    if ( v2 )
    {
      v6 = v2 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          handle_qnan1(21LL, v3, v1);
        else
          except1(8, 21, v4, v5, v1);
      }
      else
      {
        ctrlfp(v1, 65472LL);
        *(_QWORD *)&X ^= _xmm;
      }
    }
    else
    {
      ctrlfp(v1, 65472LL);
    }
  }
  else
  {
    HIDWORD(v7) = HIDWORD(X) & 0x7FFFFFFF;
    LODWORD(v7) = LODWORD(X);
    ctrlfp(v1, 65472LL);
    return v7;
  }
  return X;
}
