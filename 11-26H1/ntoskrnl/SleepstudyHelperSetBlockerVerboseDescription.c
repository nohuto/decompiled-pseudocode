/*
 * XREFs of SleepstudyHelperSetBlockerVerboseDescription @ 0x140A90984
 * Callers:
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A90314 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SleepstudyHelperSetBlockerVerboseDescription(
        __int64 a1,
        __int16 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned __int16 *a5)
{
  __int64 v5; // r15
  unsigned __int16 *v9; // rdi
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  __int64 v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned int i; // ecx
  __int64 Pool2; // rax
  __int64 v18; // rsi
  unsigned int v19; // ebx
  __int64 v20; // r8
  unsigned int v21; // r12d
  int *v22; // rbx
  __int64 v23; // r8
  int v24; // eax

  v5 = a4;
  if ( a1 && a3 && *((_QWORD *)a3 + 1) && ((v9 = a5, !a4) || a5) )
  {
    if ( *(_QWORD *)(a1 + 64) )
    {
      return (unsigned int)-1073741791;
    }
    else
    {
      v10 = 4 * a4;
      v11 = -1;
      v12 = v5;
      if ( (unsigned __int64)(4 * v5) > 0xFFFFFFFF )
      {
        return (unsigned int)-1073741675;
      }
      else
      {
        v13 = v10 + 12;
        if ( v10 + 12 >= v10 )
          v11 = v10 + 12;
        v14 = v13 < v10 ? 0xC0000095 : 0;
        if ( v13 >= v10 )
        {
          if ( v11 <= 0x10 )
            v11 = 16;
          v15 = v11 + *a3;
          if ( v15 < v11 )
          {
            return (unsigned int)-1073741675;
          }
          else
          {
            for ( i = 0; i < (unsigned int)v5; ++i )
            {
              if ( !*(_QWORD *)&a5[8 * i + 4] )
                return (unsigned int)-1073741811;
              if ( v15 + a5[8 * i] < v15 )
                return (unsigned int)-1073741675;
              v15 += a5[8 * i];
            }
            Pool2 = ExAllocatePool2(0x100uLL);
            v18 = Pool2;
            if ( Pool2 )
            {
              *(_WORD *)(Pool2 + 4) = a2;
              v19 = 16;
              *(_DWORD *)Pool2 = v5;
              if ( (unsigned int)(4 * v5 + 12) > 0x10 )
                v19 = 4 * v5 + 12;
              v20 = *a3 >> 1;
              *(_DWORD *)(Pool2 + 8) = v20;
              memmove((void *)(Pool2 + v19), *((const void **)a3 + 1), 2 * v20);
              v21 = v19 + 2 * *(_DWORD *)(v18 + 8);
              if ( (_DWORD)v5 )
              {
                v22 = (int *)(v18 + 12);
                do
                {
                  v23 = *v9 >> 1;
                  *v22 = v23;
                  memmove((void *)(v18 + v21), *((const void **)v9 + 1), 2 * v23);
                  v24 = *v22++;
                  v9 += 8;
                  v21 += 2 * v24;
                  --v12;
                }
                while ( v12 );
              }
              *(_QWORD *)(a1 + 64) = v18;
              return 0;
            }
            else
            {
              return (unsigned int)-1073741670;
            }
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v14;
}
