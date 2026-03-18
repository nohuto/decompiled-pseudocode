/*
 * XREFs of UsbhGetHubNodeInfo @ 0x140055574
 * Callers:
 *     UsbhQueryWmiDataBlock @ 0x140055CC0 (UsbhQueryWmiDataBlock.c)
 * Callees:
 *     UsbhRefPdoDeviceHandle @ 0x1400118A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140011B50 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhGetDeviceInformationEx @ 0x14002EA50 (UsbhGetDeviceInformationEx.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhGetHubNodeInfo(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4; // r15
  size_t v5; // r14
  _DWORD *v8; // rax
  unsigned int v9; // ebx
  _DWORD *v10; // rbp
  unsigned int v11; // r12d
  unsigned int v12; // r13d
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebp
  _DWORD *v16; // rdi
  __int64 PortData; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  _WORD *DeviceInformation; // rax
  __int64 result; // rax
  int v25; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v26; // [rsp+88h] [rbp+20h]

  v26 = a4;
  v4 = a4;
  v5 = a3;
  v8 = FdoExt(a1);
  v9 = 0;
  v25 = 0;
  v10 = v8;
  v11 = *((unsigned __int8 *)FdoExt(a1) + 2938);
  v12 = 16 * v11 + 1186;
  if ( v12 <= (unsigned int)v5 )
  {
    memset(a2, 0, v5);
    *a2 = 1431519822;
    a2[1] = v12;
    a2[22] = 1;
    *(_OWORD *)(a2 + 23) = *(_OWORD *)(v10 + 1298);
    *(_OWORD *)(a2 + 27) = *(_OWORD *)(v10 + 1302);
    *(_OWORD *)(a2 + 31) = *(_OWORD *)(v10 + 734);
    *(_OWORD *)(a2 + 35) = *(_OWORD *)(v10 + 738);
    *(_OWORD *)(a2 + 39) = *(_OWORD *)(v10 + 742);
    *(_OWORD *)(a2 + 43) = *(_OWORD *)(v10 + 746);
    a2[47] = v10[750];
    *((_WORD *)a2 + 96) = *((_WORD *)v10 + 1502);
    *((_BYTE *)a2 + 194) = *((_BYTE *)v10 + 3006);
    *(_DWORD *)((char *)a2 + 195) = v10[344];
    *(_DWORD *)((char *)a2 + 207) = *((unsigned __int8 *)FdoExt(a1) + 2938);
    if ( (v10[640] & 1) != 0 )
      *((_BYTE *)a2 + 202) = 1;
    if ( v10[758] != 100 )
      *((_BYTE *)a2 + 201) = 1;
    v15 = 0;
    if ( v11 )
    {
      v16 = (_DWORD *)((char *)a2 + 219);
      do
      {
        PortData = UsbhGetPortData(a1, (unsigned __int16)(v15 + 1), v13, v14);
        if ( PortData )
        {
          *((_WORD *)v16 - 2) = *(_WORD *)(PortData + 4);
          *v16 = *(unsigned __int16 *)(PortData + 4);
          v16[1] = *(_DWORD *)(PortData + 428);
          v18 = UsbhLatchPdo(a1, (unsigned __int16)v15 + 1, 0LL, 0x574D4948u);
          v19 = v18;
          if ( v18 )
          {
            v20 = PdoExt(v18);
            v21 = UsbhRefPdoDeviceHandle(*((_QWORD *)v20 + 148), v19, 0LL, 1212442734LL);
            v22 = v21;
            if ( v21 )
            {
              DeviceInformation = UsbhGetDeviceInformationEx(a1, &v25, v21);
              if ( v25 >= 0 )
              {
                *((_WORD *)v16 - 1) = DeviceInformation[17];
                ExFreePoolWithTag(DeviceInformation, 0);
              }
              UsbhDerefPdoDeviceHandle(a1, v22, 0LL, 1212442734LL);
            }
            UsbhUnlatchPdo(a1, v19, 0LL, 0x574D4948u);
          }
        }
        ++v15;
        v16 += 4;
      }
      while ( v15 < v11 );
      v4 = v26;
    }
  }
  else
  {
    v9 = -1073741789;
  }
  result = v9;
  *v4 = v12;
  return result;
}
