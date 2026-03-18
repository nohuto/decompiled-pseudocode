/*
 * XREFs of ?GrepDescribePixelFormat@@YAHAEAVXDCOBJ@@HIPEAUtagPIXELFORMATDESCRIPTOR@@@Z @ 0x1403343A0
 * Callers:
 *     NtGdiDescribePixelFormat @ 0x14032A3C0 (NtGdiDescribePixelFormat.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x14032910C (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1403344BC (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepDescribePixelFormat(
        struct XDCOBJ *a1,
        int a2,
        unsigned int a3,
        struct tagPIXELFORMATDESCRIPTOR *a4)
{
  __int64 result; // rax
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v14)(_QWORD, _QWORD, _QWORD, struct tagPIXELFORMATDESCRIPTOR *); // rax
  struct _RECTL v15; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v16[160]; // [rsp+40h] [rbp-B8h] BYREF

  result = XDCOBJ::ipfdDevMax(a1);
  v9 = result;
  if ( a3 )
  {
    if ( a3 < 0x28 || a2 < 1 || a2 > (int)result )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      *(_QWORD *)&v15.left = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      v10 = *(_QWORD *)&v15.left;
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v15);
      v11 = v10;
      if ( (*(_DWORD *)(v10 + 40) & 0x20000) != 0 )
      {
        v12 = *(_QWORD **)(*(_QWORD *)a1 + 48LL);
        v15 = *(struct _RECTL *)(*(_QWORD *)a1 + 1032LL);
        DeviceHdev = hdevFindDeviceHdev(v12, &v15, 0LL);
        v11 = v10;
        if ( DeviceHdev )
        {
          v11 = DeviceHdev;
          v10 = DeviceHdev;
        }
      }
      v14 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, struct tagPIXELFORMATDESCRIPTOR *))(v11 + 3120);
      if ( v14 && v14(*(_QWORD *)(v10 + 1784), (unsigned int)a2, a3, a4) )
      {
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
        return v9;
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
    }
    return 0LL;
  }
  return result;
}
