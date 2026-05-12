/*
 * XREFs of sub_140014200 @ 0x140014200
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 */

__int64 __fastcall sub_140014200(__int64 a1, PIO_WORKITEM **a2)
{
  unsigned int v2; // ebx
  int **v5; // rax
  int *v6; // rdi
  int *v7; // rbp
  int *v8; // r9
  int v9; // ecx
  PIO_WORKITEM *v10; // rsi
  struct _DEVICE_OBJECT *v11; // rcx
  PIO_WORKITEM WorkItem; // rax
  volatile signed __int32 *v13; // rdx

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_1400680F0(off_140168120->AttachedDevice, 62LL, &unk_140149070, a1, a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v5 = *(int ***)(a1 - 16);
    v6 = 0LL;
    v7 = 0LL;
    if ( v5 )
    {
      v8 = *v5;
      if ( *v5 )
      {
        v9 = *v8;
        if ( ((_BYTE)v5[31] & 1) != 0 )
        {
          if ( v9 == 1314275652 )
          {
            v7 = *v5;
LABEL_9:
            v10 = (PIO_WORKITEM *)sub_1400143E0(64LL, 32LL, 1230463314LL, *((_QWORD *)v8 + 1));
            if ( v10 )
            {
              if ( v6 )
                v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)v6 + 1);
              else
                v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)v7 + 1);
              WorkItem = IoAllocateWorkItem(v11);
              *v10 = WorkItem;
              if ( WorkItem )
              {
                v13 = v6 + 1222;
                if ( !v6 )
                  v13 = v7 + 270;
                _InterlockedIncrement(v13);
                *a2 = v10;
                return v2;
              }
              ExFreePoolWithTag(v10, 0x49576152u);
            }
            return (unsigned int)-1056964605;
          }
        }
        else if ( v9 == 1094997074 )
        {
          v6 = *v5;
          goto LABEL_9;
        }
      }
    }
    return 3238002694LL;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 1) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_140055930(off_140168120->AttachedDevice, 63LL, &unk_140149070);
  }
  return 3238002696LL;
}
