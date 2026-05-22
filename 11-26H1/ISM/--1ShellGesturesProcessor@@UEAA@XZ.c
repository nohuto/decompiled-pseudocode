/*
 * XREFs of ??1ShellGesturesProcessor@@UEAA@XZ @ 0x1801A2D48
 * Callers:
 *     ??_GShellGesturesProcessor@@UEAAPEAXI@Z @ 0x1801A2F80 (--_GShellGesturesProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@IUActiveContactData@ShellGesturesProcessor@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1801A2844 (--1-$_Hash@V-$_Umap_traits@IUActiveContactData@ShellGesturesProcessor@@V-$_Uhash_compare@IU-$has.c)
 *     ??1?$_Hash@V?$_Umap_traits@W4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@V?$_Uhash_compare@W4EdgyLocation@ShellEdgyRecognizer@@U?$hash@W4EdgyLocation@ShellEdgyRecognizer@@@std@@U?$equal_to@W4EdgyLocation@ShellEdgyRecognizer@@@4@@4@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1801A28FC (--1-$_Hash@V-$_Umap_traits@W4EdgyLocation@ShellEdgyRecognizer@@V-$vector@UGestureRegistration@Sh.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellGesturesProcessor::~ShellGesturesProcessor(ShellGesturesProcessor *this)
{
  __int64 v2; // rcx

  std::_Hash<std::_Umap_traits<unsigned int,ShellGesturesProcessor::ActiveContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>,0>>::~_Hash<std::_Umap_traits<unsigned int,ShellGesturesProcessor::ActiveContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>,0>>((__int64)this + 128);
  std::_Hash<std::_Umap_traits<enum ShellEdgyRecognizer::EdgyLocation,std::vector<ShellGesturesProcessor::GestureRegistration>,std::_Uhash_compare<enum ShellEdgyRecognizer::EdgyLocation,std::hash<enum ShellEdgyRecognizer::EdgyLocation>,std::equal_to<enum ShellEdgyRecognizer::EdgyLocation>>,std::allocator<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>,0>>::~_Hash<std::_Umap_traits<enum ShellEdgyRecognizer::EdgyLocation,std::vector<ShellGesturesProcessor::GestureRegistration>,std::_Uhash_compare<enum ShellEdgyRecognizer::EdgyLocation,std::hash<enum ShellEdgyRecognizer::EdgyLocation>,std::equal_to<enum ShellEdgyRecognizer::EdgyLocation>>,std::allocator<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>,0>>((__int64 *)this + 4);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    InputContext::Release((InputContext *)(v2 + 8));
  }
  *((_DWORD *)this + 5) = -1073741823;
}
