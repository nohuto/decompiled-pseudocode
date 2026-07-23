/*
 * XREFs of MiCreateSlabAllocationsFromLoaderBlock @ 0x140D04838
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCreateBootSlabEntries @ 0x140D043F0 (MiCreateBootSlabEntries.c)
 */

__int64 __fastcall MiCreateSlabAllocationsFromLoaderBlock(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi
  int v3; // eax
  ULONG_PTR v4; // r14
  ULONG_PTR v5; // rsi
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbp
  int v8; // ebx
  ULONG_PTR v9; // r15
  unsigned int v10; // ebx
  int BootSlabEntries; // ecx
  _QWORD **v12; // rcx
  unsigned __int64 v13; // rax
  _QWORD *i; // rcx
  unsigned __int64 v15; // rbx
  char v17[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-A0h]

  if ( (dword_140E37E44 & 8) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 360);
    if ( (v1 & 1) != 0 )
    {
      if ( v1 == 1 )
        v2 = 0LL;
      else
        v2 = v1 ^ ((a1 + 352) | 1);
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 360);
    }
    while ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 24);
      if ( v3 == 29 || v3 == 36 )
      {
        v4 = *(_QWORD *)(v2 + 40);
        v5 = *(_QWORD *)(v2 + 32);
        if ( ((v5 | v4) & 0x1FF) != 0
          || !v5
          || !v4
          || (v6 = v4 + v5, v4 + v5 < v5)
          || (v7 = v6 - 1, v6 - 1 > qword_140E2D920) )
        {
          KeBugCheckEx(0x1Au, 0x3030311uLL, v5, *(_QWORD *)(v2 + 40), 0LL);
        }
        v8 = MiPageToNode(*(_QWORD *)(v2 + 32));
        v9 = v4;
        if ( v8 != (unsigned int)MiPageToNode(v7) )
          v9 = 512LL;
        while ( v4 )
        {
          v10 = MiPageToNode(v5);
          if ( v10 != (unsigned int)MiPageToNode(v9 + v5 - 1) )
            KeBugCheckEx(0x1Au, 0x3030316uLL, v5, v9, v10);
          BootSlabEntries = MiCreateBootSlabEntries(qword_140E37E50 + 15216 + 56320LL * v10, v5, v9, 0);
          if ( BootSlabEntries < 0 )
            return (unsigned int)BootSlabEntries;
          v4 -= v9;
          v5 += v9;
        }
      }
      v12 = *(_QWORD ***)(v2 + 8);
      v13 = v2;
      if ( v12 )
      {
        v2 = *(_QWORD *)(v2 + 8);
        for ( i = *v12; i; i = (_QWORD *)*i )
          v2 = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          v2 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v2 || *(_QWORD *)v2 == v13 )
            break;
          v13 = v2;
        }
      }
    }
  }
  BootSlabEntries = 0;
  if ( (MiFlags & 0x10000) != 0 )
  {
    v15 = (unsigned int)dword_140E37E44;
    memset_0(v17, 0, 0x68uLL);
    v18 = (v15 >> 3) & 1;
    return (unsigned int)VslpEnterIumSecureMode(2u, 0xDDu, 0, (__int64)v17);
  }
  return (unsigned int)BootSlabEntries;
}
