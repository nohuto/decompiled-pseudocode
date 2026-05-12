/*
 * XREFs of sub_1400229C8 @ 0x1400229C8
 * Callers:
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_14002B390 @ 0x14002B390 (sub_14002B390.c)
 *     sub_14003A920 @ 0x14003A920 (sub_14003A920.c)
 *     sub_14003CE50 @ 0x14003CE50 (sub_14003CE50.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140052634 @ 0x140052634 (sub_140052634.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_140068B90 @ 0x140068B90 (sub_140068B90.c)
 *     sub_140068C70 @ 0x140068C70 (sub_140068C70.c)
 *     sub_140068CE0 @ 0x140068CE0 (sub_140068CE0.c)
 *     sub_140068D70 @ 0x140068D70 (sub_140068D70.c)
 *     sub_140068DC0 @ 0x140068DC0 (sub_140068DC0.c)
 *     sub_140068E10 @ 0x140068E10 (sub_140068E10.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_14008B650 @ 0x14008B650 (sub_14008B650.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_1400D1EB8 @ 0x1400D1EB8 (sub_1400D1EB8.c)
 *     sub_1400DE5E8 @ 0x1400DE5E8 (sub_1400DE5E8.c)
 *     sub_1400DEB08 @ 0x1400DEB08 (sub_1400DEB08.c)
 *     NaptrDnsRecordConvert @ 0x1400DF8C8 (NaptrDnsRecordConvert.c)
 *     sub_1400E69E8 @ 0x1400E69E8 (sub_1400E69E8.c)
 *     sub_1400E6EA4 @ 0x1400E6EA4 (sub_1400E6EA4.c)
 *     sub_1400FDA54 @ 0x1400FDA54 (sub_1400FDA54.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 *     sub_1401AF864 @ 0x1401AF864 (sub_1401AF864.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400229C8(char a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx

  v1 = a1 & 0x3F;
  if ( v1 <= 0x16 )
  {
    if ( v1 != 22 )
    {
      if ( v1 > 0xA )
      {
        v7 = v1 - 11;
        if ( !v7 )
          return 3221225653LL;
        v8 = v7 - 6;
        if ( !v8 )
          return 3221225664LL;
        v9 = v8 - 1;
        if ( !v9 )
          return 2147483653LL;
        if ( v9 != 3 )
          return 3221225861LL;
      }
      else
      {
        if ( v1 == 10 )
          return 3221225629LL;
        v2 = v1 - 1;
        if ( !v2 )
          return 0LL;
        v3 = v2 - 4;
        if ( !v3 )
          return 2147483665LL;
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 2;
          if ( v5 )
          {
            if ( v5 == 1 )
              return 3221225653LL;
            return 3221225861LL;
          }
          return 3221225664LL;
        }
      }
      return 3221225488LL;
    }
    return 3221225473LL;
  }
  if ( v1 <= 0x25 )
  {
    if ( v1 == 37 )
      return 3221225996LL;
    v10 = v1 - 23;
    if ( !v10 )
      return 3221225506LL;
    v11 = v10 - 1;
    if ( !v11 )
      return 3221226614LL;
    v12 = v11 - 8;
    if ( !v12 )
      return 3221225664LL;
    v13 = v12 - 1;
    if ( !v13 )
      return 3221225664LL;
    if ( v13 == 1 )
      return 3221225488LL;
    return 3221225861LL;
  }
  v14 = v1 - 38;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
      return 3221225473LL;
    v16 = v15 - 1;
    if ( !v16 )
      return 3221225485LL;
    if ( v16 == 16 )
      return 3221226762LL;
    return 3221225861LL;
  }
  return 3221225626LL;
}
