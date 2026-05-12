/*
 * XREFs of sub_140075DA4 @ 0x140075DA4
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 *     sub_140033D74 @ 0x140033D74 (sub_140033D74.c)
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_1400681AC @ 0x1400681AC (sub_1400681AC.c)
 *     sub_1400CA35C @ 0x1400CA35C (sub_1400CA35C.c)
 */

__int64 __fastcall sub_140075DA4(__int64 a1, signed __int64 a2, volatile signed __int64 *a3, __int64 a4, _DWORD *a5)
{
  unsigned int v9; // ebx
  int v10; // eax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v11; // rcx
  _DWORD *v12; // rax
  struct _IO_WORKITEM *v13; // rcx
  int *v15; // [rsp+60h] [rbp+8h] BYREF
  int *v16; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_1400681AC((__int64)off_140168120->AttachedDevice, 0x40u, (__int64)&unk_140149070, a1, a2, a3);
    }
    return (unsigned int)-1056964602;
  }
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930((__int64)off_140168120->AttachedDevice, 0x41u, (__int64)&unk_140149070);
    }
    return (unsigned int)-1056964596;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    sub_1400273F0(a1, &v15, &v16);
    if ( v15 )
    {
      v10 = sub_140033D74((__int64)v15);
LABEL_20:
      if ( v10 >= 0 )
      {
        if ( _InterlockedCompareExchange64(a3 + 1, a2, 0LL) )
        {
          v9 = -1056964596;
          if ( v15 )
            v11 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v15 + 42);
          else
            v11 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v16 + 19);
          ExReleaseRundownProtectionCacheAware(v11);
        }
        else
        {
          v12 = a5;
          v13 = (struct _IO_WORKITEM *)*a3;
          *((_QWORD *)a3 + 2) = a4;
          if ( v12 )
            IoQueueWorkItemToNode(v13, sub_14004DAD0, 1LL, a3, *v12);
          else
            IoQueueWorkItem(v13, (PIO_WORKITEM_ROUTINE)sub_14004DAD0, DelayedWorkQueue, (PVOID)a3);
          return 0;
        }
      }
      else
      {
        return (unsigned int)-1056964599;
      }
      return v9;
    }
    if ( v16 )
    {
      v10 = sub_1400CA35C(v16);
      goto LABEL_20;
    }
    return (unsigned int)-1056964602;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 1) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_140055930((__int64)off_140168120->AttachedDevice, 0x42u, (__int64)&unk_140149070);
  }
  return (unsigned int)-1056964600;
}
