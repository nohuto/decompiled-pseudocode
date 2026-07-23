/*
 * XREFs of MiValidatePartitionInitialAddMemory @ 0x14070ECE4
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x140883418 (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidatePartitionInitialAddMemory(__int64 a1, int *a2, __int64 a3, char a4)
{
  int v5; // ecx
  unsigned int v6; // edi
  unsigned __int64 v7; // rbx
  unsigned __int64 *v8; // r9
  unsigned __int64 v9; // r11
  __int64 v10; // rcx
  bool v11; // zf
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax

  if ( a4 )
    return 3221225569LL;
  v5 = *a2;
  if ( (*a2 & 0xFFFFFF80) == 0 )
  {
    v6 = a2[1];
    if ( v6 )
    {
      if ( (v5 & 4) != 0 && !_bittest64(&KeFeatureBits, 0x25u) )
        return 3221225659LL;
      if ( (v5 & 0x60) == 0 || (v5 & 4) == 0 && (*a2 & 0x60) != 0x60 )
      {
        if ( (v5 & 0x10) != 0 )
        {
          if ( (v5 & 0xFFFFFFE9) != 0
            || !*((_QWORD *)a2 + 2)
            || !*((_QWORD *)a2 + 3)
            || !*((_QWORD *)a2 + 4)
            || !*((_QWORD *)a2 + 5) )
          {
            return 3221225485LL;
          }
LABEL_19:
          v7 = 0LL;
          v8 = (unsigned __int64 *)(a3 + 48);
          v9 = 0LL;
          if ( (v5 & 0x20) != 0 )
          {
            v10 = 512LL;
          }
          else
          {
            v11 = (v5 & 0x40) == 0;
            v10 = 0x40000LL;
            if ( v11 )
            {
              v12 = 0;
              if ( (*a2 & 4) != 0 )
                v12 = 0x40000;
              v10 = v12;
            }
          }
          v13 = 0;
          while ( 1 )
          {
            v14 = *v8;
            if ( *v8 < v7 )
              break;
            v15 = v8[1];
            v7 = v15 + v14;
            if ( v15 + v14 <= v14 || v15 + v9 <= v9 || v10 && ((v15 | v14) & (v10 - 1)) != 0 )
              break;
            ++v13;
            v8 += 2;
            v9 += v15;
            if ( v13 >= v6 )
              return 0LL;
          }
          return 3221225485LL;
        }
        if ( (v5 & 7) != 0 )
          goto LABEL_19;
      }
    }
  }
  return 3221225485LL;
}
