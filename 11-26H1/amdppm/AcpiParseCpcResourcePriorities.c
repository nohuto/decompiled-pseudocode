/*
 * XREFs of AcpiParseCpcResourcePriorities @ 0x14002A690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     AcpiParseCpcResourcePriorityRegisterDescriptor @ 0x14002A864 (AcpiParseCpcResourcePriorityRegisterDescriptor.c)
 */

__int64 __fastcall AcpiParseCpcResourcePriorities(__int64 a1, PVOID **a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v4; // ebx
  unsigned int v7; // r14d
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int *Pool2; // rax
  int v13; // edx
  PVOID *v14; // rsi
  _WORD *v15; // rdi
  unsigned int i; // ebp
  __int64 v17; // rax
  int v18; // r9d
  PVOID *v19; // rdi
  __int64 v20; // rbp

  v3 = 0;
  v4 = 0;
  if ( *(_WORD *)(a1 + 2) < 4u || a3 < 8 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = 0LL;
    v7 = 0;
    v8 = *(unsigned __int16 *)(a1 + 2);
    if ( (unsigned __int16)v8 >= 4u )
    {
      v9 = a1 + 4;
      v10 = a1 + 4 + v8;
      if ( a1 + 4 < v10 )
      {
        do
        {
          v11 = *(unsigned __int16 *)(v9 + 2);
          if ( (unsigned __int16)v11 < 4u )
            v11 = 4LL;
          ++v7;
          v9 += v11 + 4;
        }
        while ( v9 < v10 );
        if ( v7 )
        {
          Pool2 = (unsigned int *)ExAllocatePool2(64LL, (int)(104 * v7 + 8), 1919119952LL);
          v14 = (PVOID *)Pool2;
          if ( Pool2 )
          {
            v15 = (_WORD *)(a1 + 4);
            *Pool2 = v7;
            for ( i = 0; ; ++i )
            {
              if ( i >= v7 )
              {
                *a2 = v14;
                return (unsigned int)v4;
              }
              if ( *v15 != 3 )
                break;
              v4 = AcpiParseCpcResourcePriorityRegisterDescriptor(v15, &v14[13 * i + 1]);
              if ( v4 < 0 )
              {
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_24;
                v18 = 85;
                goto LABEL_23;
              }
              v17 = (unsigned __int16)v15[1];
              ++v3;
              if ( (unsigned __int16)v17 < 4u )
                v17 = 4LL;
              v15 = (_WORD *)((char *)v15 + v17 + 4);
            }
            v4 = -1072431096;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_24;
            v18 = 84;
LABEL_23:
            LOBYTE(v13) = 2;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v13,
              1,
              v18,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
              i);
LABEL_24:
            if ( v3 )
            {
              v19 = v14 + 1;
              v20 = v3;
              do
              {
                if ( *v19 )
                  ExFreePoolWithTag(*v19, (ULONG)1919119952);
                v19 += 13;
                --v20;
              }
              while ( v20 );
            }
            ExFreePoolWithTag(v14, (ULONG)1919119952);
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
