/*
 * XREFs of privateDnsDebugPrint @ 0x1400B8408
 * Callers:
 *     sub_1400AE9C0 @ 0x1400AE9C0 (sub_1400AE9C0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall privateDnsDebugPrint(__int64 a1)
{
  __int64 v1; // r9
  _DWORD *OutputBuffer; // rbx
  PIRP v4; // rax
  NTSTATUS Status; // eax
  __int64 v6; // rcx
  unsigned int v7; // eax
  const int *v8; // rdx
  __int64 v9; // r9
  __int16 v10; // cx
  int v11; // r10d
  __int64 v12; // r8
  __int16 v13; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v14; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-90h] BYREF
  __int64 v19; // [rsp+90h] [rbp-78h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v22; // [rsp+C8h] [rbp-40h]
  int v23; // [rsp+D0h] [rbp-38h]
  int v24; // [rsp+D4h] [rbp-34h]
  __int64 v25; // [rsp+D8h] [rbp-30h]
  int v26; // [rsp+E0h] [rbp-28h]
  int v27; // [rsp+E4h] [rbp-24h]
  _BYTE v28[16]; // [rsp+E8h] [rbp-20h] BYREF
  __int16 *v29; // [rsp+F8h] [rbp-10h]
  int v30; // [rsp+100h] [rbp-8h]
  int v31; // [rsp+104h] [rbp-4h]
  __int16 *v32; // [rsp+108h] [rbp+0h]
  int v33; // [rsp+110h] [rbp+8h]
  int v34; // [rsp+114h] [rbp+Ch]
  __int64 *v35; // [rsp+118h] [rbp+10h]
  int v36; // [rsp+120h] [rbp+18h]
  int v37; // [rsp+124h] [rbp+1Ch]
  __int64 *v38; // [rsp+128h] [rbp+20h]
  int v39; // [rsp+130h] [rbp+28h]
  int v40; // [rsp+134h] [rbp+2Ch]
  struct _KEVENT *p_Event; // [rsp+138h] [rbp+30h]
  int v42; // [rsp+140h] [rbp+38h]
  int v43; // [rsp+144h] [rbp+3Ch]

  v1 = *(_QWORD *)(a1 + 8);
  v19 = 0LL;
  IoStatusBlock = 0LL;
  Event.Header.WaitListHead = 0LL;
  OutputBuffer = (_DWORD *)sub_1400143E0(64LL, 93LL, 1700028754LL, v1);
  OutputBuffer[1] = 0;
  *OutputBuffer = 49;
  OutputBuffer[5] = 0;
  OutputBuffer[2] = 5;
  OutputBuffer[3] = 1;
  OutputBuffer[4] = 9;
  OutputBuffer[6] = 40;
  OutputBuffer[7] = 45;
  KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(
         0x2D1400u,
         *(PDEVICE_OBJECT *)(a1 + 8),
         OutputBuffer,
         0x5Du,
         OutputBuffer,
         0x5Du,
         0,
         (PKEVENT)&Event.Header.WaitListHead,
         &IoStatusBlock);
  if ( v4 )
  {
    v4->IoStatus.Status = -1073741637;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v4);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 && *OutputBuffer == 48 && OutputBuffer[1] == 48 )
    {
      v7 = OutputBuffer[6];
      if ( v7 >= 0x28
        && (_DWORD *)((char *)OutputBuffer + v7 + 8)
        && (unsigned int)dword_140168178 > 5
        && sub_14003F840(v6, 0x400000000000LL) )
      {
        v8 = *(const int **)(a1 + 4720);
        v24 = 0;
        v27 = 0;
        v22 = &v16;
        v25 = a1 + 5064;
        v16 = 0x1000000LL;
        v23 = 8;
        v26 = 16;
        sub_140037B0C((__int64)v28, v8);
        v10 = *(unsigned __int8 *)(v9 + 3);
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v40 = 0;
        v43 = 0;
        v29 = &v13;
        v14 = *(unsigned __int8 *)(v9 + 4);
        v32 = &v14;
        LOWORD(v15) = *(unsigned __int8 *)(v9 + 2);
        v35 = &v15;
        v17 = *(unsigned int *)(v9 + 37);
        v38 = &v17;
        *(_QWORD *)&Event.Header.Lock = *(unsigned int *)(v9 + 41);
        p_Event = &Event;
        v13 = v10;
        v30 = v11 - 6;
        v33 = v11 - 6;
        v36 = v11 - 6;
        v39 = v11;
        v42 = v11;
        sub_140037A5C((unsigned int)(v11 - 6), (unsigned __int8 *)dword_1401571E9, v12, v9, 0xAu, &v21);
      }
    }
  }
  ExFreePoolWithTag(OutputBuffer, 0x65546152u);
}
