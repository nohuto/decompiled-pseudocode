/*
 * XREFs of Amd64GetCounterResolution @ 0x1405A65A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64GetCounterResolution(unsigned int a1, int *a2)
{
  __int64 v2; // rax
  int v3; // r9d
  unsigned int v6; // r11d
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rax
  int v13; // eax

  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v3 = 0;
  v6 = 0;
  v7 = KiProcessorBlock[v2];
  v8 = *(_QWORD *)(v7 + 88);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 4);
    v10 = 0;
    if ( v8 == -24 )
      goto LABEL_5;
  }
  else
  {
    v9 = 0;
  }
  v10 = *(_DWORD *)(v8 + 28);
LABEL_5:
  v11 = 0;
  v12 = v8 + 48;
  if ( v12 )
    v11 = *(_DWORD *)(v12 + 4);
  if ( *(_QWORD *)(v7 + 88) == -72LL )
    v13 = 0;
  else
    v13 = *(_DWORD *)(*(_QWORD *)(v7 + 88) + 76LL);
  if ( a1 == -1073741591 || a1 < v9 + v10 + v11 + v13 )
    v3 = 48;
  else
    v6 = -1073741811;
  *a2 = v3;
  return v6;
}
