/*
 * XREFs of GenShortInteger @ 0x140138268
 * Callers:
 *     GenInteger @ 0x140137E48 (GenInteger.c)
 * Callees:
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 */

__int64 __fastcall GenShortInteger(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r10d
  unsigned __int64 v3; // rbx
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 i; // rdx

  v2 = 0;
  v3 = a2;
  v5 = 0;
  v6 = a2;
  if ( !a2 )
    goto LABEL_4;
  do
  {
    v6 >>= 8;
    ++v5;
  }
  while ( v6 );
  if ( !v5 )
LABEL_4:
    v5 = 1;
  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(unsigned int *)(a1 + 12);
  if ( v5 + (int)v8 + 1 <= v7 )
  {
    *(_BYTE *)(v8 + *(_QWORD *)a1) = v5 + 0x80;
    v9 = ++*(_DWORD *)(a1 + 12);
    for ( i = v5 + v9 - 1; (unsigned int)i >= v9; i = (unsigned int)(i - 1) )
    {
      *(_BYTE *)(i + *(_QWORD *)a1) = v3;
      v9 = *(_DWORD *)(a1 + 12);
      v3 >>= 8;
    }
    *(_DWORD *)(a1 + 12) = v9 + v5;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xBu,
        (__int64)&WPP_7125d21b90f93d8abdbf4e6e2db0cd73_Traceguids,
        v7,
        v5 + v8 + 1);
    return (unsigned int)-1073741789;
  }
  return v2;
}
