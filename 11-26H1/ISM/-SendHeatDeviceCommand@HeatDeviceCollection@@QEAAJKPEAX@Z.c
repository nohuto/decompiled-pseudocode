/*
 * XREFs of ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x180067B40
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x1800679C0 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HeatDeviceCollection::SendHeatDeviceCommand(HeatDeviceCollection *this, int a2, _QWORD *a3)
{
  __int64 i; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // edx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-60h]
  _OWORD v18[3]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  int v20; // [rsp+A0h] [rbp+20h] BYREF

  v20 = 0;
  if ( a3 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x100 )
      {
        v13 = -2147023728;
        v14 = 197LL;
        goto LABEL_15;
      }
      v7 = *((_QWORD *)this + i + 78);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 16);
        if ( !v8 || *(_DWORD *)(v7 + 40) == a2 )
          break;
      }
    }
    switch ( *(_DWORD *)a3 )
    {
      case 1:
        if ( *((_DWORD *)a3 + 2) == 1 )
        {
          v9 = NtRIMDeviceIoControl(
                 *((_QWORD *)this + 10),
                 v8,
                 *((unsigned int *)a3 + 4),
                 a3[3],
                 *((_DWORD *)a3 + 8),
                 a3[5],
                 *((_DWORD *)a3 + 12),
                 &v20,
                 *(_DWORD *)a3 - 1);
          v10 = (_DWORD *)a3[7];
          v11 = v9;
          if ( v10 )
            *v10 = v20;
          goto LABEL_10;
        }
        v13 = -2147024809;
        v14 = 233LL;
        break;
      case 2:
        *(_QWORD *)a3[1] = v8;
        v11 = 0;
LABEL_10:
        *((_DWORD *)a3 + 16) = v11;
        return 0LL;
      case 3:
        v16 = *((_QWORD *)this + 10);
        memset(v18, 0, 40);
        v11 = RIMGetDeviceProperties(v16, v8, v18);
        if ( v11 >= 0 )
        {
          *(_QWORD *)a3[1] = *(_QWORD *)&v18[1];
          *(_DWORD *)(a3[1] + 8LL) = DWORD2(v18[1]);
        }
        goto LABEL_10;
      case 4:
        v15 = *((_QWORD *)this + 10);
        *((_QWORD *)&v18[0] + 1) = *((unsigned int *)a3 + 4);
        *(_QWORD *)&v18[1] = a3[1];
        *(_QWORD *)&v18[0] = 4LL;
        *(_OWORD *)((char *)&v18[1] + 8) = 0LL;
        v11 = RIMGetDeviceProperties(v15, v8, v18);
        if ( v11 >= 0 )
          *((_DWORD *)a3 + 4) = DWORD2(v18[0]);
        goto LABEL_10;
      default:
        v13 = -2147024809;
        v14 = 289LL;
        break;
    }
  }
  else
  {
    v13 = -2147024809;
    v14 = 191LL;
  }
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
    (const char *)v13,
    v17);
  return v13;
}
