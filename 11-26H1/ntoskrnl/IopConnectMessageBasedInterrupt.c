/*
 * XREFs of IopConnectMessageBasedInterrupt @ 0x140A9D270
 * Callers:
 *     IoConnectInterruptEx @ 0x140A9C1B0 (IoConnectInterruptEx.c)
 * Callees:
 *     HalGetMessageRoutingInfo @ 0x140432590 (HalGetMessageRoutingInfo.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopGetInterruptConnectionData @ 0x140A9C4C0 (IopGetInterruptConnectionData.c)
 *     IoDisconnectInterrupt @ 0x140A9C840 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopConnectMessageBasedInterrupt(
        int a1,
        struct _DEVICE_OBJECT *a2,
        unsigned __int8 **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // ebx
  int v11; // r15d
  unsigned __int8 *v12; // rsi
  unsigned __int8 v13; // r13
  _DWORD *DeviceNode; // rax
  int MessageRoutingInfo; // edi
  NTSTATUS InterruptConnectionData; // eax
  _DWORD *v18; // r14
  unsigned int i; // ecx
  __int64 v20; // r8
  int v21; // eax
  unsigned __int8 *Pool2; // rax
  __int64 j; // rax
  __int64 v24; // rax
  _OWORD *v25; // r15
  char v26; // al
  __int128 v27; // xmm1
  int v28; // eax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 v32; // r12
  __int128 v33; // xmm0
  int v34; // eax
  char v35; // [rsp+38h] [rbp-C8h]
  __int64 v36; // [rsp+48h] [rbp-B8h]
  char v37; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h]
  struct _DEVICE_OBJECT *v42; // [rsp+88h] [rbp-78h]
  unsigned __int8 **v43; // [rsp+90h] [rbp-70h]
  __int128 v44; // [rsp+98h] [rbp-68h] BYREF
  __int128 v45; // [rsp+A8h] [rbp-58h]
  _BYTE v46[20]; // [rsp+B8h] [rbp-48h] BYREF
  int v47; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v48[5]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v49; // [rsp+128h] [rbp+28h]

  v7 = 0;
  v43 = a3;
  v42 = a2;
  *a3 = 0LL;
  v41 = a4;
  v40 = 0LL;
  P = 0LL;
  v37 = 0;
  v11 = 0;
  v44 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v45 = 0LL;
  memset(v46, 0, sizeof(v46));
  memset_0(&v47, 0, 0x60uLL);
  if ( !a2 || (DeviceNode = a2->DeviceObjectExtension->DeviceNode) == 0LL || (DeviceNode[99] & 0x20000) != 0 || !a4 )
    return (unsigned int)-1073741811;
  InterruptConnectionData = IopGetInterruptConnectionData(a2, &P);
  v18 = P;
  MessageRoutingInfo = InterruptConnectionData;
  if ( InterruptConnectionData < 0 )
    goto LABEL_12;
  for ( i = 0; i < *(_DWORD *)P; ++i )
  {
    v20 = 88LL * i;
    v21 = *(_DWORD *)((char *)P + v20 + 8);
    if ( v21 == 1 || (unsigned int)(v21 - 2) <= 1 )
    {
      ++v11;
      if ( a1 == 5 )
      {
        v37 = 1;
      }
      else if ( a1 == 3 )
      {
        if ( a7 )
        {
          if ( a7 < *((_BYTE *)P + v20 + 16) )
            goto LABEL_11;
          v13 = a7;
        }
        else if ( a6 )
        {
          if ( *((_BYTE *)P + v20 + 16) > v13 )
            v13 = *((_BYTE *)P + v20 + 16);
        }
        else
        {
          v13 = 0;
        }
      }
    }
  }
  if ( !v11 )
  {
LABEL_11:
    MessageRoutingInfo = -1073741811;
    goto LABEL_12;
  }
  Pool2 = (unsigned __int8 *)ExAllocatePool2(0x40uLL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    MessageRoutingInfo = -1073741670;
    goto LABEL_12;
  }
  *Pool2 = v13;
  for ( j = 0LL; ; j = (unsigned int)((_DWORD)P + 1) )
  {
    LODWORD(P) = j;
    if ( (unsigned int)j >= *v18 )
      break;
    v24 = 88 * j;
    v25 = (_OWORD *)((char *)v18 + v24 + 8);
    v39 = v24;
    if ( *(_DWORD *)v25 != 1 )
    {
      if ( (unsigned int)(*(_DWORD *)v25 - 2) > 1 )
        continue;
      v24 = v39;
    }
    if ( v37 )
    {
      v26 = 0;
    }
    else if ( v13 )
    {
      v26 = v13;
    }
    else
    {
      v26 = *((_BYTE *)v18 + v24 + 16);
    }
    v27 = v25[1];
    v35 = v26;
    v28 = *((_DWORD *)v12 + 1);
    v48[0] = *v25;
    v29 = v25[2];
    v48[1] = v27;
    v47 = 1;
    v30 = v25[3];
    v48[2] = v29;
    v31 = v25[4];
    v48[3] = v30;
    *(_QWORD *)&v30 = *((_QWORD *)v25 + 10);
    v48[4] = v31;
    v49 = v30;
    MessageRoutingInfo = IopConnectInterrupt(&v40, (ULONG_PTR)v42, 0LL, v41, a5, v28, a6, v35, 1, v36, (__int64)&v47);
    if ( MessageRoutingInfo < 0 )
      goto LABEL_12;
    v32 = 6LL * *((unsigned int *)v12 + 1);
    if ( *(_DWORD *)v25 == 3 )
    {
      LODWORD(v44) = 0;
      v33 = *(_OWORD *)((char *)v18 + v39 + 32);
      DWORD2(v44) = *(_DWORD *)((char *)v18 + v39 + 12);
      v34 = *(_DWORD *)((char *)v18 + v39 + 80);
      v45 = v33;
      *(_DWORD *)v46 = v34;
      *(_OWORD *)&v46[4] = *(_OWORD *)((char *)v18 + v39 + 48);
      MessageRoutingInfo = HalGetMessageRoutingInfo((__int64)&v44, &v47);
      if ( MessageRoutingInfo < 0 )
        goto LABEL_12;
      v25 = v48;
    }
    *(_QWORD *)&v12[8 * v32 + 8] = *((_QWORD *)v25 + 9);
    *(_DWORD *)&v12[8 * v32 + 32] = *((_DWORD *)v25 + 20);
    *(_QWORD *)&v12[8 * v32 + 16] = *((_QWORD *)v25 + 3);
    *(_QWORD *)&v12[8 * v32 + 24] = v40 + 112;
    *(_DWORD *)&v12[8 * v32 + 36] = *((_DWORD *)v25 + 1);
    v12[8 * v32 + 40] = *((_BYTE *)v25 + 8);
    *(_DWORD *)&v12[8 * v32 + 44] = *((_DWORD *)v25 + 4);
    *(_DWORD *)&v12[8 * v32 + 48] = *((_DWORD *)v25 + 3);
    ++*((_DWORD *)v12 + 1);
  }
  MessageRoutingInfo = 0;
  *v43 = v12;
LABEL_12:
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( MessageRoutingInfo < 0 && v12 )
  {
    if ( *((_DWORD *)v12 + 1) )
    {
      do
        IoDisconnectInterrupt(*(PKINTERRUPT *)&v12[48 * v7++ + 24]);
      while ( v7 < *((_DWORD *)v12 + 1) );
    }
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)MessageRoutingInfo;
}
