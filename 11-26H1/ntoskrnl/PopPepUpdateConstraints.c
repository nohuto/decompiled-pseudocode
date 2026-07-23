/*
 * XREFs of PopPepUpdateConstraints @ 0x1403BD4FC
 * Callers:
 *     PopRequestPowerIrp @ 0x14026F334 (PopRequestPowerIrp.c)
 *     PopPluginDevicePower @ 0x1403BCABC (PopPluginDevicePower.c)
 *     PopPepDeviceDState @ 0x1403BD1C4 (PopPepDeviceDState.c)
 *     PopRequestCompletion @ 0x1403BE4B0 (PopRequestCompletion.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PopPepReleaseActivityLink @ 0x1403BAB90 (PopPepReleaseActivityLink.c)
 *     PopPepPromoteActivities @ 0x1403BACA0 (PopPepPromoteActivities.c)
 *     PopPepRequestWork @ 0x1403BB1C8 (PopPepRequestWork.c)
 *     PopPepUpdateIdleState @ 0x1403BB6E8 (PopPepUpdateIdleState.c)
 *     PopPepLockActivityLink @ 0x1403BD780 (PopPepLockActivityLink.c)
 *     PopPepCancelActivityRange @ 0x140461BB0 (PopPepCancelActivityRange.c)
 */

void __fastcall PopPepUpdateConstraints(__int64 a1, int a2, char a3)
{
  char v5; // al
  __int64 v6; // rdx
  char v7; // di
  unsigned int v8; // ebp
  _DWORD *v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // r8d
  _DWORD *v15; // rax
  unsigned int i; // edi
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // [rsp+80h] [rbp+8h]
  KIRQL v21; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+20h]

  v21 = 0;
  v5 = PopPepLockActivityLink(a1, 0LL, 4LL, 1LL, &v21);
  v6 = *(unsigned int *)(a1 + 180);
  v7 = v5;
  v8 = *(_DWORD *)(a1 + 120);
  v19 = v5;
  if ( (_DWORD)v6 )
  {
    v9 = (_DWORD *)(a1 + 296);
    do
    {
      v8 += *v9;
      v9 += 52;
      --v6;
    }
    while ( v6 );
    v22 = v8;
    v10 = 0;
    do
    {
      v11 = 208LL * v10;
      v12 = v11 + a1 + 192;
      if ( (*(_BYTE *)(v12 + 16) & 1) != 0 )
      {
        if ( a3 )
        {
          *(_DWORD *)(v12 + 4LL * a2 + 152) = *(_DWORD *)(v11 + a1 + 380) - 1;
        }
        else
        {
          PopPepCancelActivityRange(v12 + 56, 1, 1, 1, v12 + 104);
          *(_DWORD *)(v12 + 4LL * a2 + 152) = 0;
          KeResetEvent((PRKEVENT)(v12 + 32));
        }
        PopPepUpdateIdleState(a1, v11 + a1 + 192, a3);
        if ( !a3 )
        {
          v18 = *(_QWORD *)(v11 + a1 + 256);
          if ( *(_DWORD *)v18 )
            *(_BYTE *)(v18 + 16) = 1;
          else
            KeSetEvent((PRKEVENT)(v12 + 32), 0, 0);
        }
      }
      ++v10;
    }
    while ( v10 < *(_DWORD *)(a1 + 180) );
    v8 = v22;
    v7 = v19;
  }
  PopPepPromoteActivities(a1, 0LL, 3);
  v13 = *(unsigned int *)(a1 + 180);
  v14 = *(_DWORD *)(a1 + 120);
  if ( (_DWORD)v13 )
  {
    v15 = (_DWORD *)(a1 + 296);
    do
    {
      v14 += *v15;
      v15 += 52;
      --v13;
    }
    while ( v13 );
  }
  PopPepRequestWork(a1, v8, v14);
  PopPepReleaseActivityLink(a1, 0LL, v7, v21);
  if ( !a3 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
    {
      v17 = 208LL * i;
      if ( (*(_BYTE *)(v17 + a1 + 208) & 1) != 0 )
        KeWaitForSingleObject((PVOID)(a1 + v17 + 224), Executive, 0, 0, 0LL);
    }
  }
}
