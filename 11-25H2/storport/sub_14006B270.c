/*
 * XREFs of sub_14006B270 @ 0x14006B270
 * Callers:
 *     sub_14017AF58 @ 0x14017AF58 (sub_14017AF58.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14006B270(struct _DEVICE_OBJECT *a1)
{
  char v1; // bl
  ULONG v3; // [rsp+58h] [rbp+10h] BYREF
  ULONG v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v1 = 0;
  v5 = 0;
  v4 = 0;
  v3 = 0;
  if ( IoGetDevicePropertyData(a1, &stru_14014B900, 0, 0, 4u, &v5, &v4, &v3) >= 0 && v3 == 7 && v4 == 4 )
    return v5 == 2;
  return v1;
}
