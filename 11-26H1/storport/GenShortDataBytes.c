/*
 * XREFs of GenShortDataBytes @ 0x1401381C4
 * Callers:
 *     GenDataBytes @ 0x140137DC0 (GenDataBytes.c)
 * Callees:
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall GenShortDataBytes(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int v8; // eax
  int v10; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 12);
  v6 = 0;
  if ( (unsigned int)v5 + a3 + 1 <= v3 )
  {
    *(_BYTE *)(v5 + *(_QWORD *)a1) = a3 - 96;
    v8 = *(_DWORD *)(a1 + 12) + 1;
    *(_DWORD *)(a1 + 12) = v8;
    if ( a3 )
    {
      memmove((void *)(*(_QWORD *)a1 + v8), a2, a3);
      *(_DWORD *)(a1 + 12) += a3;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v10 = v5 + a3 + 1;
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_7125d21b90f93d8abdbf4e6e2db0cd73_Traceguids,
        v3,
        v10);
    }
    return (unsigned int)-1073741789;
  }
  return v6;
}
