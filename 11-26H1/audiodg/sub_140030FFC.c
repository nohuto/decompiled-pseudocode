/*
 * XREFs of sub_140030FFC @ 0x140030FFC
 * Callers:
 *     sub_140030FC0 @ 0x140030FC0 (sub_140030FC0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14003FD14 @ 0x14003FD14 (sub_14003FD14.c)
 */

void __fastcall sub_140030FFC(__int64 a1)
{
  bool v1; // zf
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 *v4; // rdi
  DWORD v5; // ecx
  HRESULT v6; // eax
  int v7; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 96) == 0;
  *(_QWORD *)a1 = off_1400BA2C8;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  *(_QWORD *)(a1 + 8) = off_1400BA2A8;
  v4 = (__int64 *)(a1 + 88);
  *(_QWORD *)(a1 + 16) = off_1400BA288;
  if ( !v1 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    v1 = *v4 == 0;
    v5 = *(_DWORD *)(a1 + 96);
    v9 = v2;
    if ( v1 )
    {
      v6 = RtwqUnlockWorkQueue(v5);
      if ( v6 < 0 )
      {
        v7 = 155;
        goto LABEL_8;
      }
    }
    else
    {
      v6 = sub_14003FD14(*v4, v5);
      if ( v6 < 0 )
      {
        v7 = 151;
LABEL_8:
        sub_140007934((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp", v6);
      }
    }
    sub_140018FF0(&v9);
  }
  sub_140003238(v4);
  DeleteCriticalSection(v2);
  *(_DWORD *)(a1 + 28) = -1073741823;
}
