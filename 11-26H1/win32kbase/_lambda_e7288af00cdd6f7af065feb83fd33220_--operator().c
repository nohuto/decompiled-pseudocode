/*
 * XREFs of _lambda_e7288af00cdd6f7af065feb83fd33220_::operator() @ 0x140162078
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd33220___ @ 0x140161FF0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd3322.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_e7288af00cdd6f7af065feb83fd33220_::operator()(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 result; // rax

  *a2 = 168;
  a2[1] = *(_DWORD *)(*(_QWORD *)a1 + 32LL);
  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  if ( v3 && (v4 = *(_QWORD *)(v3 + 16)) != 0 )
    v5 = *(_DWORD *)(v4 + 32);
  else
    v5 = 0;
  a2[2] = v5;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 72LL);
  if ( v6 && (v7 = *(_QWORD *)(v6 + 16)) != 0 )
    v8 = *(_DWORD *)(v7 + 32);
  else
    v8 = 0;
  a2[3] = v8;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( v9 && (v10 = *(_QWORD *)(v9 + 16)) != 0 )
    v11 = *(_DWORD *)(v10 + 32);
  else
    v11 = 0;
  a2[4] = v11;
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  if ( v12 && (v13 = *(_QWORD *)(v12 + 16)) != 0 )
    v14 = *(_DWORD *)(v13 + 32);
  else
    v14 = 0;
  a2[5] = v14;
  result = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
  if ( result )
  {
    result = *(_QWORD *)(result + 16);
    if ( result )
      v2 = *(_DWORD *)(result + 32);
  }
  a2[6] = v2;
  return result;
}
