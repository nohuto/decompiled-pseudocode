/*
 * XREFs of AccelpSiovIaaQueryCompletionInformation @ 0x1406E4540
 * Callers:
 *     AccelpSiovIaaOperationHandler @ 0x1406E4274 (AccelpSiovIaaOperationHandler.c)
 *     AccelpSiovIaaQueryCompletionInformation @ 0x1406E4540 (AccelpSiovIaaQueryCompletionInformation.c)
 * Callees:
 *     AccelpSiovIaaQueryCompletionInformation @ 0x1406E4540 (AccelpSiovIaaQueryCompletionInformation.c)
 *     IaaGetStatusFromCompletionRecord @ 0x1406E5974 (IaaGetStatusFromCompletionRecord.c)
 */

__int64 __fastcall AccelpSiovIaaQueryCompletionInformation(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // r12d
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned int StatusFromCompletionRecord; // ebx
  char v14; // al
  char v15; // al
  char v16; // cl
  _OWORD *v17; // rcx
  __int64 v18; // r15
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  int v21; // eax
  unsigned int i; // r14d

  v5 = a4;
  v8 = (unsigned int)(a3 - 1);
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        StatusFromCompletionRecord = 0;
        if ( !*(_DWORD *)(a5 + 24) || *(_QWORD *)(a5 + 16) )
        {
          v17 = *(_OWORD **)(a5 + 16);
          if ( (unsigned int)a4 >= 0x400 )
          {
            if ( *(_BYTE *)(a1 + 7) != 67 )
              return (unsigned int)-1073741637;
            v18 = 8LL;
            v19 = (_OWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
            do
            {
              *v17 = *v19;
              v17[1] = v19[1];
              v17[2] = v19[2];
              v17[3] = v19[3];
              v17[4] = v19[4];
              v17[5] = v19[5];
              v17[6] = v19[6];
              v17 += 8;
              v20 = v19[7];
              v19 += 8;
              *(v17 - 1) = v20;
              --v18;
            }
            while ( v18 );
          }
          else
          {
            StatusFromCompletionRecord = -1073741789;
          }
          *(_DWORD *)(a5 + 24) = 1024;
          return StatusFromCompletionRecord;
        }
        return (unsigned int)-1073741811;
      }
      v11 = (unsigned int)(v10 - 1);
      if ( (_DWORD)v11 )
      {
        v12 = (unsigned int)(v11 - 1);
        if ( (_DWORD)v12 )
        {
          if ( (_DWORD)v12 != 1 )
            return (unsigned int)-1073741637;
          v14 = *(_BYTE *)(a1 + 7);
          if ( v14 && (unsigned __int8)(v14 - 2) > 1u )
          {
            StatusFromCompletionRecord = IaaGetStatusFromCompletionRecord(a2, a2, v12, a4);
            if ( (int)(StatusFromCompletionRecord + 0x80000000) < 0 || StatusFromCompletionRecord == -1073741789 )
              *(_DWORD *)(a5 + 12) = *(_DWORD *)(a2 + 24);
            return StatusFromCompletionRecord;
          }
          return (unsigned int)-1073741811;
        }
        v15 = *(_BYTE *)(a1 + 7);
        if ( !v15 || v15 == 2 )
          return (unsigned int)-1073741811;
        StatusFromCompletionRecord = IaaGetStatusFromCompletionRecord(a2, a2, v12, a4);
        if ( (int)(StatusFromCompletionRecord + 0x80000000) < 0 || StatusFromCompletionRecord == -1073741789 )
          *(_BYTE *)(a5 + 8) = *(_BYTE *)(a2 + 28);
      }
      else
      {
        v16 = *(_BYTE *)(a1 + 7);
        if ( !v16 || (unsigned __int8)(v16 - 2) <= 1u || v16 == 68 )
          return (unsigned int)-1073741811;
        StatusFromCompletionRecord = IaaGetStatusFromCompletionRecord(a2, a2, v11, a4);
        if ( (int)(StatusFromCompletionRecord + 0x80000000) < 0 || StatusFromCompletionRecord == -1073741789 )
          *(_DWORD *)(a5 + 4) = *(_DWORD *)(a2 + 32);
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 7) != 66 )
        return (unsigned int)-1073741811;
      StatusFromCompletionRecord = IaaGetStatusFromCompletionRecord(a2, a2, v9, a4);
      if ( (int)(StatusFromCompletionRecord + 0x80000000) < 0 || StatusFromCompletionRecord == -1073741789 )
      {
        StatusFromCompletionRecord = 0;
        *(_DWORD *)a5 = *(_DWORD *)(a2 + 4);
      }
    }
  }
  else
  {
    v21 = IaaGetStatusFromCompletionRecord(a2, a2, v8, a4);
    if ( v21 >= 0 || v21 == -1073741789 )
    {
      for ( i = 1; i < 8; ++i )
      {
        if ( i != 1 )
          AccelpSiovIaaQueryCompletionInformation(a1, a2, i, v5, a5);
      }
      return 0;
    }
    return (unsigned int)v21;
  }
  return StatusFromCompletionRecord;
}
