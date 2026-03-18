/*
 * XREFs of VidSchGetNodesRunningTime @ 0x1400C20C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchGetNodesRunningTime(__int64 a1, __int64 a2)
{
  __int64 i; // r8
  __int64 v3; // rax

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 88); i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i < 0x40 )
    {
      v3 = *(_QWORD *)(a1 + 696);
      if ( (unsigned int)i < *(_DWORD *)(a1 + 768) )
        v3 += 8 * i;
      *(_QWORD *)(a2 + 8 * i) = *(_QWORD *)(*(_QWORD *)v3 + 2776LL);
    }
  }
}
