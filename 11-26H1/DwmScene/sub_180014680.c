/*
 * XREFs of sub_180014680 @ 0x180014680
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_18007EAEC @ 0x18007EAEC (sub_18007EAEC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180014680(__int64 a1, int a2, int a3)
{
  __int64 v6; // r8
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  void *v10; // rdx
  __int64 result; // rax
  _BYTE v12[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  sub_1800143C0((__int64)v12);
  try
  {
    if ( !a2 )
    {
      sub_1800143E4((__int64)v12, (__int64)&unk_1801CC038);
      goto LABEL_13;
    }
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
          {
LABEL_13:
            LOBYTE(v6) = a3 == 1;
            sub_18007EAEC(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL), v12, v6);
            sub_1800129D0((__int64)v12);
            return 0LL;
          }
          v10 = &unk_1801CC018;
        }
        else
        {
          v10 = &unk_1801CBFF8;
        }
      }
      else
      {
        v10 = &unk_1801CC058;
      }
    }
    else
    {
      v10 = &unk_1801CBFD8;
    }
    sub_1800143E4((__int64)v12, (__int64)v10);
    goto LABEL_13;
  }
  catch ( ... )
  {
    sub_1800102C4(
      retaddr,
      222LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
