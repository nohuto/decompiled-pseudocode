/*
 * XREFs of sub_1400588CC @ 0x1400588CC
 * Callers:
 *     sub_14006C240 @ 0x14006C240 (sub_14006C240.c)
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006A7AC @ 0x14006A7AC (sub_14006A7AC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1400588CC(__int64 a1, unsigned int a2)
{
  int v4; // esi
  int v5; // ebp
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  v13 = v6;
  if ( *(_DWORD *)(a1 + 256) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
    v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 216);
    v11 = *(_QWORD **)(a1 + 168);
    if ( !v11 )
      goto LABEL_13;
    do
    {
      v8 = sub_1400265D8(v7, &v11);
      v4 = sub_14006A7AC(*v8, a2);
      if ( v4 >= 0 )
        v5 = 1;
    }
    while ( v11 );
    if ( v4 >= 0 )
    {
LABEL_13:
      sub_140018FF0(&v12);
      *(_DWORD *)(a1 + 112) = a2;
      goto LABEL_14;
    }
    if ( v5 )
    {
      v11 = *(_QWORD **)(a1 + 168);
      while ( v11 )
      {
        v9 = sub_1400265D8(v7, &v11);
        sub_14006A7AC(*v9, *(unsigned int *)(a1 + 112));
      }
    }
    sub_140018FF0(&v12);
  }
  else
  {
    v4 = -2005139437;
  }
  sub_14005A470("CAudioDeviceGraph::UpdateLoopbackConstrictionLevel", 1208LL, (unsigned int)v4);
LABEL_14:
  sub_140018FF0(&v13);
  return (unsigned int)v4;
}
