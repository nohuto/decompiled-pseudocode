/*
 * XREFs of AcpiPccAcquireSubspaceCore @ 0x140043D58
 * Callers:
 *     AcpiPccAcquireSubspaceAsync @ 0x140043D40 (AcpiPccAcquireSubspaceAsync.c)
 *     AcpiPccAcquireSubspace @ 0x1400D3A00 (AcpiPccAcquireSubspace.c)
 * Callees:
 *     AcpiPccUnlockSubspace @ 0x140040AA8 (AcpiPccUnlockSubspace.c)
 *     AcpiPccLockSubspace @ 0x14004B9A0 (AcpiPccLockSubspace.c)
 *     AcpiDiagTracePccAcquireSubspace @ 0x14004D554 (AcpiDiagTracePccAcquireSubspace.c)
 */

__int64 __fastcall AcpiPccAcquireSubspaceCore(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // ebp
  unsigned int v9; // ebx
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  int v12; // ecx
  char v13; // r12
  unsigned int v14; // eax
  int v15; // r8d
  KIRQL v17; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v17 = 0;
  if ( a2 )
  {
    AcpiPccLockSubspace(a1, &v17);
    v11 = *(_DWORD *)(a1 + 8);
    v12 = (v11 >> 1) & 0xF;
    v13 = (v11 >> 1) & 0xF;
    if ( v12 == 3 )
    {
      *(_QWORD *)(a1 + 376) = a2;
      *(_QWORD *)(a1 + 384) = a3;
      *(_DWORD *)(a1 + 8) = v11 & 0xFFFFFFE1 | 8;
      v9 = 259;
      KeInsertQueueDpc((PRKDPC)(a1 + 712), 0LL, 0LL);
LABEL_16:
      LOBYTE(v10) = v13;
      LOBYTE(v4) = a4 != 0LL;
      v15 = *(_DWORD *)(a1 + 8) >> 1;
      LOBYTE(v15) = v15 & 0xF;
      AcpiDiagTracePccAcquireSubspace(*(_DWORD *)(a1 + 4), (_DWORD)v10, v15, v4, v9);
      AcpiPccUnlockSubspace(a1, v17);
      return v9;
    }
    if ( a4 )
    {
      v10 = *(_QWORD **)(a1 + 368);
      if ( *v10 != a1 + 360 )
        __fastfail(3u);
      *a4 = a1 + 360;
      a4[1] = v10;
      *v10 = a4;
      *(_QWORD *)(a1 + 368) = a4;
      a4[6] = a2;
    }
    else
    {
      if ( v12 == 8 )
      {
        v14 = v11 & 0xFFFFFFE1 | 0x14;
      }
      else
      {
        if ( v12 != 9 )
        {
          v9 = -1073740024;
          goto LABEL_16;
        }
        v14 = v11 & 0xFFFFFFE1 | 0x16;
      }
      *(_DWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 376) = a2;
      *(_QWORD *)(a1 + 384) = a3;
    }
    v9 = 259;
    goto LABEL_16;
  }
  return (unsigned int)-1073741811;
}
