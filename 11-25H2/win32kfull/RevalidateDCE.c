/*
 * XREFs of RevalidateDCE @ 0x14005A190
 * Callers:
 *     UpdateRedirectedDCE @ 0x140059FD0 (UpdateRedirectedDCE.c)
 *     DeleteHrgnClip @ 0x1401A2540 (DeleteHrgnClip.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1402EA738 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     InvalidateDCE @ 0x14005A254 (InvalidateDCE.c)
 *     SpbCheckDce @ 0x14005A370 (SpbCheckDce.c)
 */

__int64 __fastcall RevalidateDCE(__int64 a1)
{
  int *v1; // r8
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // r10
  int v6; // r9d
  __int64 v8; // rcx

  v1 = (int *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 48);
  if ( (v3 & 0x1000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v3 >= 0 )
    {
      v3 &= 0x7FFFFFE7u;
      v5 = v4 + 40;
      *v1 = v3;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v4 + 136) + 8LL) + 8LL) >= 0
        || (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 40LL),
            ((*(_BYTE *)(*(_QWORD *)v5 + 31LL) ^ *(_BYTE *)(v8 + 31)) & 0x10) != 0) )
      {
        v6 = v3;
        if ( (*(_BYTE *)(*(_QWORD *)v5 + 31LL) & 0x22) == 2 )
        {
          v6 = v3 | 8;
          *v1 = v3 | 8;
          v1 = (int *)(a1 + 48);
        }
        v3 = v6;
        if ( (*(_BYTE *)(*(_QWORD *)v5 + 31LL) & 4) != 0 )
          v3 = v6 | 0x10;
      }
      else if ( (*(_BYTE *)(v8 + 31) & 4) != 0 )
      {
        v3 |= 0x10u;
        *v1 = v3;
        v1 = (int *)(a1 + 48);
      }
    }
    *v1 = v3 | 0x2000;
    return UserSetDCVisRgn(a1);
  }
  else
  {
    SpbCheckDce(a1);
    return InvalidateDCE(a1);
  }
}
