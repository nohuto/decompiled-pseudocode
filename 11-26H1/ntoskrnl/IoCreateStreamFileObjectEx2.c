/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x140A36470
 * Callers:
 *     IoCreateStreamFileObjectEx @ 0x140A34D00 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x140A35130 (IoCreateStreamFileObject.c)
 *     IoCreateStreamFileObjectLite @ 0x140A36420 (IoCreateStreamFileObjectLite.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1403EAEB0 (IopIncrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x14044AA10 (IopIncrementVpbRefCount.c)
 *     IopGetSetSpecificExtension @ 0x140455360 (IopGetSetSpecificExtension.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 */

__int64 __fastcall IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, __int64 a3, PVOID *a4, HANDLE *a5)
{
  HANDLE *v5; // r14
  __int16 v6; // bx
  ULONG_PTR v8; // rsi
  int SetSpecificExtension; // r15d
  _QWORD *v11; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  struct _SLIST_ENTRY *v15; // rdx
  ULONG_PTR v16; // rcx
  PVOID v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-60h]
  _DWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]
  __int128 v24; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  v5 = a5;
  v6 = *(_WORD *)(a1 + 2) & 2;
  Object = 0LL;
  v19[1] = 0;
  v8 = a3;
  v23 = 0;
  Handle = 0LL;
  *a4 = 0LL;
  if ( v5 )
    *v5 = 0LL;
  if ( *(_WORD *)a1 == 16 )
  {
    if ( v6 && v5 )
    {
      if ( (*(_BYTE *)(a1 + 2) & 1) == 0 )
        return 3221225485LL;
    }
    else
    {
      if ( a2 )
      {
        v8 = *(_QWORD *)(a2 + 8);
LABEL_8:
        LOBYTE(a2) = 1;
        IopIncrementDeviceObjectRefCount(v8, a2, a3);
        v19[0] = 48;
        v20 = 0LL;
        v22 = 512;
        v21 = 0LL;
        v24 = 0LL;
        LOWORD(a5) = 1;
        SetSpecificExtension = ObCreateObjectEx(
                                 0,
                                 IoFileObjectType,
                                 (__int64)v19,
                                 0,
                                 v18,
                                 216,
                                 216,
                                 0,
                                 &Object,
                                 (__int64)&a5);
        if ( SetSpecificExtension < 0 )
        {
          IopDecrementDeviceObjectRef(v8, 0LL, 0LL);
          if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
            RtlRaiseStatus(SetSpecificExtension);
          return (unsigned int)SetSpecificExtension;
        }
        memset_0(Object, 0, 0xD8uLL);
        *(_WORD *)Object = 5;
        *((_WORD *)Object + 1) = 216;
        *((_QWORD *)Object + 1) = v8;
        *((_DWORD *)Object + 20) = 256;
        KeInitializeEvent((PRKEVENT)((char *)Object + 152), SynchronizationEvent, 0);
        *((_QWORD *)Object + 23) = 0LL;
        v11 = (char *)Object + 192;
        *((_QWORD *)Object + 25) = (char *)Object + 192;
        *v11 = v11;
        if ( v6 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          P = CurrentPrcb->PPLookasideList[4].P;
          v15 = (struct _SLIST_ENTRY *)*((_QWORD *)Object - 2);
          ++P->TotalFrees;
          if ( LOWORD(P->ListHead.Alignment) < P->Depth
            || (++P->FreeMisses,
                P = CurrentPrcb->PPLookasideList[4].L,
                ++P->TotalFrees,
                LOWORD(P->ListHead.Alignment) < P->Depth) )
          {
            RtlpInterlockedPushEntrySList(&P->ListHead, v15);
          }
          else
          {
            ++P->FreeMisses;
            guard_dispatch_icall_no_overrides((__int64)v15, (__int64)v15);
          }
          *((_QWORD *)Object - 2) = 0LL;
        }
        else
        {
          result = ObInsertObjectEx((char *)Object, 0LL, 1u, 1, 0, (__int64)&Object, &Handle);
          SetSpecificExtension = result;
          if ( (int)result < 0 )
          {
            if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
              RtlRaiseStatus(result);
            return result;
          }
        }
        *((_DWORD *)Object + 20) |= 0x40000u;
        v16 = *(_QWORD *)(v8 + 56);
        if ( v16 )
          IopIncrementVpbRefCount(v16, 1);
        if ( !v6 )
        {
          if ( v5 )
          {
            v17 = Object;
            *v5 = Handle;
            ObfDereferenceObject(v17);
          }
          else
          {
            ObCloseHandle(Handle, 0);
          }
        }
        if ( *(_QWORD *)(a1 + 8) )
        {
          a5 = 0LL;
          SetSpecificExtension = IopGetSetSpecificExtension((__int64)Object, 1, 32LL, 1, (__int64 *)&a5, 0LL);
          if ( SetSpecificExtension < 0 )
          {
            if ( v5 )
            {
              ObCloseHandle(*v5, 0);
              *v5 = 0LL;
            }
            else
            {
              ObfDereferenceObject(Object);
            }
            if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
              RtlRaiseStatus(SetSpecificExtension);
            return (unsigned int)SetSpecificExtension;
          }
          *a5 = *(HANDLE *)(a1 + 8);
        }
        *a4 = Object;
        return (unsigned int)SetSpecificExtension;
      }
      if ( a3 )
        goto LABEL_8;
      if ( (*(_BYTE *)(a1 + 2) & 1) == 0 )
        return 3221225485LL;
    }
    RtlRaiseStatus(-1073741811);
  }
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(-1073741637);
  return 3221225659LL;
}
