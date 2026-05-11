/*
 * XREFs of TopologyFixUpFunctionUnits @ 0x14002DF2C
 * Callers:
 *     TopologyBuildFilterTopology @ 0x140041998 (TopologyBuildFilterTopology.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TopologyFixUpFunctionUnits(_QWORD *a1)
{
  _QWORD *v1; // r8
  unsigned int v3; // r9d
  int v4; // edi
  unsigned int i; // r10d
  __int64 v6; // r15
  bool v7; // cl
  _QWORD *v8; // r11
  _QWORD *v9; // rax
  int v10; // ebp
  bool v11; // zf
  unsigned int v12; // eax
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // rax

  v1 = (_QWORD *)*a1;
  v3 = 0;
  if ( (_QWORD *)*a1 == a1 )
  {
    v4 = -1073741438;
  }
  else
  {
    v4 = 0;
    do
    {
      if ( v4 < 0 )
        break;
      for ( i = 0; i < *((_DWORD *)v1 + 8); ++i )
      {
        v6 = v1[7];
        v7 = 0;
        v4 = -1073741275;
        v8 = 0LL;
        v9 = (_QWORD *)*a1;
        v10 = *(_DWORD *)(v6 + 12LL * i);
        while ( v9 != a1 && !v7 )
        {
          v11 = *((_DWORD *)v9 + 4) == v10;
          if ( *((_DWORD *)v9 + 4) == v10 )
          {
            v8 = v9;
            v4 = 0;
          }
          else
          {
            v9 = (_QWORD *)*v9;
          }
          v7 = v11;
        }
        if ( v4 >= 0 )
        {
          *(_DWORD *)(v6 + 12LL * i + 4) = *((_DWORD *)v8 + 6);
          *(_DWORD *)(v1[7] + 12LL * i + 8) = *((_DWORD *)v8 + 7);
        }
      }
      if ( *((_DWORD *)v1 + 5) <= 1u )
      {
        v12 = *((_DWORD *)v1 + 16);
        if ( v12 != -1 && v12 > v3 )
          v3 = *((_DWORD *)v1 + 16);
      }
      v1 = (_QWORD *)*v1;
    }
    while ( v1 != a1 );
  }
  v13 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
  {
LABEL_27:
    if ( v4 >= 0 )
      return (unsigned int)v4;
    goto LABEL_28;
  }
  if ( v4 >= 0 )
  {
    do
    {
      if ( *((_DWORD *)v13 + 5) <= 1u && *((_DWORD *)v13 + 16) == -1 )
        *((_DWORD *)v13 + 16) = ++v3;
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != a1 );
    goto LABEL_27;
  }
LABEL_28:
  while ( 1 )
  {
    v14 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v14[1] != a1 || (v15 = *v14, *(_QWORD **)(*v14 + 8LL) != v14) )
      __fastfail(3u);
    *a1 = v15;
    *(_QWORD *)(v15 + 8) = a1;
    ExFreePool(v14);
  }
  return (unsigned int)v4;
}
