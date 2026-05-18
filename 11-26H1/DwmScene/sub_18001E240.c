/*
 * XREFs of sub_18001E240 @ 0x18001E240
 * Callers:
 *     sub_18001F180 @ 0x18001F180 (sub_18001F180.c)
 *     sub_18001F264 @ 0x18001F264 (sub_18001F264.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_18001E240(__int64 a1)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)a1 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)&v3, 0);
    if ( !*(_QWORD *)a1 )
      *(_QWORD *)a1 = ++std::locale::id::_Id_cnt;
    std::_Lockit::~_Lockit((std::_Lockit *)&v3);
  }
  return *(_QWORD *)a1;
}
