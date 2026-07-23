/*
 * XREFs of PspQueryWorkingSetWatch @ 0x1409DDA3C
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ExIsRestrictedCaller @ 0x1409DDEE0 (ExIsRestrictedCaller.c)
 */

__int64 __fastcall PspQueryWorkingSetWatch(
        ULONG_PTR BugCheckParameter1,
        int a2,
        _QWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        char a6)
{
  ULONG_PTR v7; // rbx
  char v8; // r13
  __int64 result; // rax
  _DWORD *v10; // rsi
  int v11; // r15d
  __int64 v12; // r12
  __int64 v13; // rdx
  signed __int32 v14; // eax
  unsigned __int16 v15; // bx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // r12
  char v19; // al
  _DWORD *v20; // rdx
  _QWORD *v21; // rbx
  int v22; // eax
  __int64 i; // r13
  char v24; // al
  _DWORD *v25; // rdx
  unsigned int v26; // [rsp+40h] [rbp-88h]
  int v27; // [rsp+44h] [rbp-84h] BYREF
  int v28; // [rsp+48h] [rbp-80h]
  int v29; // [rsp+4Ch] [rbp-7Ch]
  unsigned int v30; // [rsp+50h] [rbp-78h]
  int v31; // [rsp+58h] [rbp-70h]
  __int64 v32; // [rsp+60h] [rbp-68h]
  PVOID Object; // [rsp+68h] [rbp-60h] BYREF
  _QWORD *v34; // [rsp+70h] [rbp-58h]
  __int64 v35; // [rsp+78h] [rbp-50h]
  _DWORD *v36; // [rsp+80h] [rbp-48h]
  _DWORD *v37; // [rsp+88h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-38h]

  v7 = BugCheckParameter1;
  Object = 0LL;
  v27 = 0;
  if ( a2 == 42 )
  {
    if ( (a4 & 0x1F) != 0 )
      return 3221225476LL;
    v29 = 32;
  }
  else
  {
    v29 = 16;
  }
  v8 = a6;
  LOBYTE(BugCheckParameter1) = a6;
  if ( (unsigned int)ExIsRestrictedCaller(BugCheckParameter1, &v27) )
    return 3221225506LL;
  result = ObpReferenceObjectByHandleWithTag(v7, 1024, (__int64)PsProcessType, a6, 0x79517350u, &Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = (_DWORD *)*((_QWORD *)Object + 88);
    v37 = v10;
    v36 = v10;
    if ( v10 )
    {
      CurrentThread = KeGetCurrentThread();
      v11 = 0;
      v12 = 0LL;
      v32 = 0LL;
      v13 = 0LL;
      v26 = 0;
      --CurrentThread->KernelApcDisable;
      _m_prefetchw(v10);
      v14 = _InterlockedOr(v10, 1u);
      v15 = v14;
      if ( (v14 & 1) == 0 )
      {
        v16 = (unsigned __int16)v14 >> 1;
        v30 = v16;
        if ( !((unsigned __int16)v14 >> 1) )
        {
          v11 = -2147483622;
          goto LABEL_10;
        }
        if ( (v14 & 0x7FFF0000) != 0 )
        {
          KeWaitForGate((__int64)(v10 + 4), 0LL);
          v13 = 0LL;
          v16 = v30;
        }
        v17 = v29 * (v16 + 1);
        if ( a4 < v17 )
        {
          v11 = -1073741789;
          if ( a5 )
          {
            if ( a6 )
              RtlWriteULongToUser(a5, v17);
            else
              *a5 = v17;
          }
          goto LABEL_65;
        }
        _m_prefetchw(v10 + 2);
        v35 = *((_QWORD *)v10 + 1);
        v32 = v35;
        if ( a2 == 42 )
        {
          v18 = 0LL;
          while ( 1 )
          {
            v28 = v18;
            if ( (unsigned int)v18 >= v16 )
            {
              a3 += 4 * (unsigned int)v13;
              v34 = a3;
              if ( a6 )
                RtlWriteULong64ToUser(a3 + 2, 0LL);
              else
                a3[2] = 0LL;
              if ( a6 )
                RtlWriteULong64ToUser(a3 + 3, 0LL);
              else
                a3[3] = 0LL;
              goto LABEL_39;
            }
            v19 = 1;
            if ( v27 )
            {
              if ( MmIsUserAddress(*(_QWORD *)&v10[6 * v18 + 10]) && MmIsUserAddress(*(_QWORD *)&v10[6 * v18 + 12]) )
                goto LABEL_25;
              v19 = 0;
            }
            if ( !v19 )
            {
              v13 = v26;
              goto LABEL_30;
            }
LABEL_25:
            v20 = &v10[4 * v18 + 10 + 2 * v18];
            v21 = &a3[4 * v26];
            if ( a6 )
              RtlCopyToUser(v21, v20, 0x18uLL);
            else
              RtlCopyVolatileMemory(v21, v20, 0x18uLL);
            if ( a6 )
              RtlWriteULong64ToUser(v21 + 3, 0LL);
            else
              v21[3] = 0LL;
            v13 = v26 + 1;
            v26 = v13;
            v31 = v13;
LABEL_30:
            v18 = (unsigned int)(v18 + 1);
            v16 = v30;
          }
        }
        v34 = a3;
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          v28 = i;
          if ( (unsigned int)i >= v15 >> 1 )
          {
            v8 = a6;
LABEL_39:
            if ( v8 )
              RtlWriteULong64ToUser(a3, 0LL);
            else
              *a3 = 0LL;
            v12 = v35;
            if ( v8 )
              RtlWriteULong64ToUser(a3 + 1, v35);
            else
              a3[1] = v35;
            if ( a5 )
            {
              v22 = v29 * (v26 + 1);
              if ( v8 )
                RtlWriteULongToUser(a5, v22);
              else
                *a5 = v22;
            }
LABEL_65:
            if ( v11 >= 0 )
            {
              _InterlockedAdd64((volatile signed __int64 *)v10 + 1, -v12);
              *v37 = 0;
              goto LABEL_11;
            }
LABEL_10:
            _interlockedbittestandreset(v10, 0);
            goto LABEL_11;
          }
          v24 = 1;
          if ( !v27 )
            goto LABEL_59;
          if ( !MmIsUserAddress(*(_QWORD *)&v10[6 * i + 10]) || !MmIsUserAddress(*(_QWORD *)&v10[6 * i + 12]) )
            break;
LABEL_60:
          v25 = &v10[4 * i + 10 + 2 * (unsigned int)i];
          if ( a6 )
            RtlCopyToUser(a3, v25, 0x10uLL);
          else
            RtlCopyVolatileMemory(a3, v25, 0x10uLL);
          a3 += 2;
          v34 = a3;
          v31 = ++v26;
LABEL_64:
          ;
        }
        v24 = 0;
LABEL_59:
        if ( !v24 )
          goto LABEL_64;
        goto LABEL_60;
      }
      v11 = -2147483622;
LABEL_11:
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v13);
    }
    else
    {
      v11 = -1073741823;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return (unsigned int)v11;
  }
  return result;
}
